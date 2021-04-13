/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoon <syoon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 21:34:58 by syoon             #+#    #+#             */
/*   Updated: 2021/04/11 21:44:10 by syoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int g_dict_error;
int g_error;
int g_eof;
t_dict *g_dict;
int g_is_first;
char *g_num;
int flag3;
int flag2;

char	*build_unit_str(int cnt)
{
	char	*ret;
	int		i;

	ret = (char*)malloc(cnt + 2);
	ret[cnt + 1] = 0;
	ret[0] = '1';
	i = cnt;
	while (i > 0)
		ret[i--] = '0';
	return (ret);
}

void	unit_process(int idx)
{
	char	*unit_str;

	if (flag3 && idx % 3 == 0)
	{
		unit_str = build_unit_str(idx);
		print(get_val(unit_str));
		ft_free(unit_str);
		flag3 = 0;
	}
	else if (flag2 && idx % 3 == 2)
		print(get_val("100"));
}

int		num_process(int idx, char *num, char *tmp)
{
	int ret;

	ret = 0;
	if (*num != '0')
	{
		flag3 = 1;
		flag2 = 1;
		tmp[0] = *num;
		if (idx % 3 == 2)
		{
			if (*num == '1' && *(num + 1) != '0')
			{
				tmp[1] = *(num + 1);
				++ret;
			}
			else
				tmp[1] = '0';
		}
		else
			tmp[1] = 0;
		print(get_val(tmp));
	}
	else
		flag2 = 0;
	return (ret);
}

void	convert_num(char *num)
{
	int		idx;
	char	*tmp;
	int		offset;

	if (num[0] == '0')
		print(get_val("0"));
	else
	{
		tmp = (char*)malloc(3);
		tmp[2] = 0;
		flag3 = 0;
		flag2 = 0;
		idx = ft_strlen(num);
		while (idx)
		{
			unit_process(idx);
			offset = num_process(idx, num, tmp);
			num += (1 + offset);
			idx -= (1 + offset);
		}
		ft_free(tmp);
	}
	ft_putstr("\n");
}

void	rush(int argc, char *argv[])
{
	if (argc > 3)
	{
		print_error_msg(ERR_MSG);
		return ;
	}
	else if (argc == 3)
		build_dict(argv[1]);
	else
		build_dict(DEFAULT_DICT_FILE);
	if (argc == 1)
		g_num = read_num();
	else if (argc == 2)
		g_num = trim_side(argv[1]);
	else
		g_num = trim_side(argv[2]);
	if (!is_valid_num(g_num))
		print_error_msg(ERR_MSG);
	else if (!g_dict_error)
	{
		if (ft_strlen(g_num) > VALID_NUM_LEN)
			print_error_msg(ERR_MSG);
		else
			convert_num(g_num);
	}
	ft_free(g_num);
}
