/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoon <syoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 21:35:26 by syoon             #+#    #+#             */
/*   Updated: 2021/04/11 21:35:27 by syoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		is_space(char c)
{
	return (c == ' ' || (9 <= c && c <= 13));
}

int		is_number(char c)
{
	return ('0' <= c && c <= '9');
}

int		is_valid_num(char *str)
{
	if (!str || (*str == '0' && *(str + 1)))
		return (0);
	while (*str)
	{
		if (!is_number(*str))
			return (0);
		++str;
	}
	return (1);
}

int		is_valid_key_value(char *str)
{
	int cnt_colon;
	int cnt_key;
	int cnt_val;

	cnt_colon = 0;
	cnt_key = 0;
	cnt_val = 0;
	while (*str)
	{
		if (*str == ':')
			++cnt_colon;
		else if (!is_space(*str))
		{
			if (cnt_colon)
				++cnt_val;
			else
				++cnt_key;
		}
		++str;
	}
	return (cnt_colon == 1 && cnt_key > 0 && cnt_val > 0);
}
