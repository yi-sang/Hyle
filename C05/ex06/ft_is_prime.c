/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 07:38:16 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/21 08:17:52 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long i;
	long long cnt;

	cnt = 0;
	i = 1;
	if (nb <= 1)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			cnt++;
		}
		i++;
	}
	if (cnt == 2)
		return (1);
	return (0);
}
