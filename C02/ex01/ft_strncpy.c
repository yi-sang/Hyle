/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 04:28:03 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/05 01:21:09 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size && src[i])
	{
		dest[i] = src[i];
		++i;
	}
	while (i < size)
		dest[i++] = 0;
	return (dest);
}
