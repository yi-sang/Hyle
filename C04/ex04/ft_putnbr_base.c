/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 01:43:15 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/07 01:47:12 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*g_base;
int		g_cnt;

void	ft_print_num(int nbr)
{
	if (!nbr)
		return ;
	ft_print_num(nbr / g_cnt);
	write(1, &g_base[nbr % g_cnt], 1);
}

int		is_vaild(void)
{
	int chk[256];
	int i;

	i = 0;
	while (i < 256)
		chk[i++] = 0;
	g_cnt = 0;
	while (g_base[g_cnt])
	{
		if (chk[(int)g_base[g_cnt]] ||
			g_base[g_cnt] == '+' || g_base[g_cnt] == '-')
			return (0);
		chk[(int)g_base[g_cnt++]] = 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long tmp;

	g_base = base;
	if (!is_vaild() || g_cnt == 0 || g_cnt == 1)
		return ;
	tmp = nbr;
	if (tmp < 0)
	{
		tmp *= -1;
		write(1, "-", 1);
	}
	ft_print_num(tmp / g_cnt);
	write(1, &g_base[tmp % g_cnt], 1);
}
