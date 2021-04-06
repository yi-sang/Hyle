/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:59:58 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/07 06:57:36 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*g_base;
int		g_cnt;

int		ft_get_len(void)
{
	int chk[256];
	int i;

	i = 0;
	while (i < 256)
		chk[i++] = 0;
	g_cnt = 0;
	while (g_base[g_cnt])
	{
		if (chk[(int)g_base[g_cnt]] || g_base[g_cnt] == '+' ||
			g_base[g_cnt] == '-' || g_base[g_cnt] == ' ' ||
			('\t' <= g_base[g_cnt] && g_base[g_cnt] <= '\r'))
			return (0);
		chk[(int)g_base[g_cnt++]] = 1;
	}
	return (1);
}

int		ft_get_i(char c)
{
	int i;

	i = 0;
	while (i < g_cnt)
	{
		if (c == g_base[i])
			return (i);
		++i;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int f_ret;
	int sign;
	int i;

	g_base = base;
	if (!ft_get_len() || g_cnt == 0 || g_cnt == 1)
		return (0);
	f_ret = 0;
	sign = 1;
	while (('\t' <= *str && *str <= '\r') || *str == ' ')
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*(str++) == '-')
			sign *= -1;
	}
	while (*str)
	{
		i = ft_get_i(*(str++));
		if (i == -1)
			break ;
		f_ret *= g_cnt;
		f_ret += (sign * i);
	}
	return (f_ret);
}
