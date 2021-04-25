/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:26:04 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/21 08:17:52 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int ret;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	ret = nb;
	while (--power)
		ret *= nb;
	return (ret);
}
