/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:45:51 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/05 17:45:53 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest;
	while (*ptr)
		++ptr;
	while (*src)
	{
		*ptr = *src;
		++src;
		++ptr;
	}
	*ptr = 0;
	return (dest);
}
