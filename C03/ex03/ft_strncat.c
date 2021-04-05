/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <snaghyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 04:46:34 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/06 04:46:37 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	ptr = dest;
	while (*ptr)
		++ptr;
	while (*src && i < nb)
	{
		*ptr = *src;
		++src;
		++ptr;
		++i;
	}
	*ptr = 0;
	return (dest);
}
