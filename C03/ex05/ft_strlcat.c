/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: sanghyle <sanghyle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:46:40 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/06 15:46:45 by sanghyle         ###   ########.fr       */
=======
/*   By: gicho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 10:52:16 by gicho             #+#    #+#             */
/*   Updated: 2020/01/26 21:01:34 by gicho            ###   ########.fr       */
>>>>>>> parent of 4190d93... sleep
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (*dest && i < size)
	{
		++i;
		++dest;
	}
	while (*src && i + 1 < size)
	{
		*dest = *src;
		++dest;
		++src;
		++i;
	}
	if (i < size)
		*dest = 0;
	while (*src)
	{
		++i;
		++src;
	}
	return (i);
}
