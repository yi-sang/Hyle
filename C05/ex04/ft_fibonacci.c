/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 01:15:11 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/08 01:48:51 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	rec(int n, int a, int b)
{
	int now;
	int pre;

	if (n == 0)
		return (a);
	if (n == 1)
		return (b);
	now = a + b;
	pre = b;
	return (rec(n - 1, pre, now));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	return (rec(index, 0, 1));
}
