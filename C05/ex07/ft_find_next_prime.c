/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <snaghyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/04/08 13:54:48 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/08 13:54:59 by sanghyle         ###   ########.fr       */
=======
/*   Created: 2021/04/07 20:52:47 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/07 20:53:08 by sanghyle         ###   ########.fr       */
>>>>>>> parent of 1bfe7ac... sleep
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (!(nb % 2 && nb % 3))
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (!(nb % i && nb % (i + 2)))
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (!ft_is_prime(i))
		++i;
	return (i);
}
