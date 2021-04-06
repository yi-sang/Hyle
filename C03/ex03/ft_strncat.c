/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:47:40 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/06 15:52:45 by sanghyle         ###   ########.fr       */
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
