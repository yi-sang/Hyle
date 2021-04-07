/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 01:13:22 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/08 01:13:36 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fac;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	fac = 1;
	while (nb)
		fac *= (nb--);
	return (fac);
}
