/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <snaghyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/04/08 01:15:49 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/08 01:45:52 by sanghyle         ###   ########.fr       */
=======
<<<<<<< HEAD
/*   Created: 2021/04/08 23:04:24 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/09 00:03:00 by sanghyle         ###   ########.fr       */
=======
/*   Created: 2021/04/07 20:52:56 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/07 20:52:58 by sanghyle         ###   ########.fr       */
>>>>>>> parent of 1bfe7ac... sleep
>>>>>>> 8b67d24e8d635b988866369ddd9b8b1ff39e3f1a
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_seq[11];
int		g_row[10];
int		g_diag1[19];
int		g_diag2[19];
int		g_cnt;

void	set_chk_var(int r, int c, int val)
{
	g_row[r] = val;
	g_diag1[c - r + 9] = val;
	g_diag2[r + c] = val;
}

void	rec(int c)
{
	int r;

	if (c == 10)
	{
		write(1, g_seq, 11);
		++g_cnt;
	}
	r = 0;
	while (r < 10)
	{
		if (!g_row[r] && !g_diag1[c - r + 9] && !g_diag2[r + c])
		{
			set_chk_var(r, c, 1);
			g_seq[c] = '0' + r;
			rec(c + 1);
			set_chk_var(r, c, 0);
		}
		++r;
	}
}

void	init(void)
{
	int i;

	g_seq[10] = '\n';
	g_cnt = 0;
	i = 0;
	while (i < 10)
	{
		g_row[i] = 0;
		g_diag1[i] = 0;
		g_diag2[i] = 0;
		++i;
	}
	while (i < 19)
	{
		g_diag1[i] = 0;
		g_diag2[i] = 0;
		++i;
	}
}

int		ft_ten_queens_puzzle(void)
{
	init();
	rec(0);
	return (g_cnt);
}
