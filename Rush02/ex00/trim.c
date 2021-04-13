/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoon <syoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 21:19:01 by syoon             #+#    #+#             */
/*   Updated: 2021/04/11 21:19:02 by syoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*trim_left(char *str)
{
	while (*str && is_space(*str))
		++str;
	return (str);
}

void	trim_right(char *str)
{
	if (!*str)
		return ;
	while (*str)
		++str;
	--str;
	while (is_space(*str))
		--str;
	*(++str) = 0;
}

char	*trim_side(char *str)
{
	char *ret;
	char *start;
	char *end;

	if (!*str)
		return (0);
	if (all_space(str))
		return (0);
	start = str;
	while (*start && is_space(*start))
		++start;
	end = start;
	while (*end)
		++end;
	--end;
	while (is_space(*end))
		--end;
	ret = (char*)malloc(end - start + 2);
	ft_strcpy(ret, start, end);
	return (ret);
}

char	*trim_alloc(char *str)
{
	char *ret;

	ret = trim_side(str);
	ft_free(str);
	return (ret);
}

int		all_space(char *str)
{
	while (is_space(*str))
		str++;
	if (*str == '\0')
		return (1);
	return (0);
}
