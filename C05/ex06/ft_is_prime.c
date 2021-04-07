/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 01:46:40 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/08 02:26:53 by sanghyle         ###   ########.fr       */
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
