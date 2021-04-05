/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 23:41:27 by sanghyle          #+#    #+#             */
/*   Updated: 2021/03/30 23:41:47 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_len;
char g_buf[10];

void	put_ary(int nine, int n)
{
	int i;

	if (n == g_len)
	{
		write(1, g_buf, g_len);
		write(1, ", ", 2);
		return ;
	}
	if (nine == 9)
		return ;
	i = nine;
	while (++i <= 10 - g_len + n)
	{
		g_buf[n] = '0' + i;
		put_ary(i, n + 1);
	}
}

void	last(int i)
{
	char c;

	while (i <= 9)
	{
		c = '0' + i++;
		write(1, &c, 1);
	}
}

void	ft_print_combn(int n)
{
	int i;

	i = 0;
	g_len = n;
	while (i < 10 - n)
	{
		g_buf[0] = '0' + i;
		put_ary(i++, 1);
	}
	last(i);
}
