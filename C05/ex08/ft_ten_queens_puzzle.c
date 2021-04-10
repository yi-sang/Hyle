/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:04:24 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/09 00:03:00 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_col[20];
int g_row[20];
int g_ldash[40];
int g_rdash[40];
int g_cnt;

void	print_map(void)
{
	int		i;
	char	ch;

	i = 0;
	while (i < 10)
	{
		ch = g_col[i] + '0';
		write(1, &ch, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	update(int i, int lp, int rp, int dir)
{
	g_row[i] = dir;
	g_ldash[lp] = dir;
	g_rdash[rp] = dir;
}

void	backtrack(int depth, int lim)
{
	int i;
	int lp;
	int rp;

	if (depth == lim)
	{
		print_map();
		g_cnt++;
		return ;
	}
	i = -1;
	while (++i < lim)
	{
		g_col[depth] = i;
		lp = depth - i + lim - 1;
		rp = depth + i;
		if (!g_row[i] && !g_ldash[lp] && !g_rdash[rp])
		{
			update(i, lp, rp, 1);
			backtrack(depth + 1, lim);
			update(i, lp, rp, 0);
		}
	}
}

int		ft_ten_queens_puzzle(void)
{
	backtrack(0, 10);
	return (g_cnt);
}
