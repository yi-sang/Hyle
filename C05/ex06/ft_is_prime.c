/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <snaghyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/04/08 01:46:40 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/08 02:26:53 by sanghyle         ###   ########.fr       */
=======
<<<<<<< HEAD
/*   Created: 2021/04/08 13:53:50 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/08 13:53:51 by sanghyle         ###   ########.fr       */
=======
/*   Created: 2021/04/07 20:52:26 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/07 20:52:28 by sanghyle         ###   ########.fr       */
>>>>>>> parent of 1bfe7ac... sleep
>>>>>>> 8b67d24e8d635b988866369ddd9b8b1ff39e3f1a
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
