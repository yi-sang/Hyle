/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoon <syoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 21:34:44 by syoon             #+#    #+#             */
/*   Updated: 2021/04/11 21:34:46 by syoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		g_fd;
char	*g_line;

t_dict	*make_struct(char *key, char *val)
{
	t_dict *ret;

	ret = (t_dict*)malloc(sizeof(t_dict));
	ret->key = key;
	ret->value = val;
	ret->next = 0;
	return (ret);
}

void	push(char *key, char *val)
{
	t_dict *tmp;

	if (!g_dict)
		g_dict = make_struct(key, val);
	else
	{
		tmp = g_dict;
		g_dict = make_struct(key, val);
		g_dict->next = tmp;
	}
}

void	insert_key_value(char *str)
{
	char *key;
	char *val;
	char *ptr;

	key = str;
	ptr = str;
	while (*ptr != ':')
		++ptr;
	key = (char*)malloc(ptr - key + 1);
	ft_strcpy(key, str, ptr - 1);
	key = trim_alloc(key);
	val = ++ptr;
	str = val;
	while (*ptr)
		++ptr;
	val = (char*)malloc(ptr - val + 1);
	ft_strcpy(val, str, ptr - 1);
	val = trim_alloc(val);
	if (key == 0 || val == 0)
		g_error = 1;
	push(key, val);
}

void	build_dict(char *file)
{
	if ((g_fd = open(file, O_RDONLY)) == -1)
	{
		print_error_msg(DICT_ERR_MSG);
		return ;
	}
	g_eof = 1;
	while ((g_line = read_line(g_fd)))
	{
		if (g_eof++)
			break ;
		if (!*g_line)
			continue ;
		if (!is_valid_key_value(g_line))
		{
			g_error = 1;
			break ;
		}
		insert_key_value(g_line);
	}
	if (g_error)
	{
		g_dict_error = 1;
		print_error_msg(DICT_ERR_MSG);
	}
	close(g_fd);
}

char	*get_val(char *key)
{
	t_dict *tmp;

	tmp = g_dict;
	while (tmp)
	{
		if (ft_is_equal(tmp->key, key))
			return (tmp->value);
		tmp = tmp->next;
	}
	return (0);
}
