/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:45:51 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/06 15:55:13 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *pter;

	pter = dest;
	while (*pter)
		++pter;
	while (*src)
	{
		*pter = *src;
		++src;
		++pter;
	}
	*pter = 0;
	return (dest);
}
