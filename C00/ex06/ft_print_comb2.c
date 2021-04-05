/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 01:24:17 by sanghyle          #+#    #+#             */
/*   Updated: 2021/03/30 01:29:53 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int front;
	int back;

	front = 0;
	back = 1;
	while (front <= 98)
	{
		back = front + 1;
		while (back <= 99)
		{
			ft_putchar((front / 10) + '0');
			ft_putchar((front % 10) + '0');
			write(1, " ", 1);
			ft_putchar((back / 10) + '0');
			ft_putchar((back % 10) + '0');
			if (front != 98 || back != 99)
			{
				write(1, ", ", 2);
			}
			back++;
		}
		front++;
	}
}
