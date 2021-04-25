/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 01:32:33 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/23 01:34:14 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*pter;

	i = 0;
	pter = dest;
	while (*pter)
		++pter;
	while (*src && i < nb)
	{
		*pter = *src;
		++src;
		++pter;
		++i;
	}
	*pter = 0;
	return (dest);
}
