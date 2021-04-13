/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:55:20 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/12 00:05:49 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	long long	len;
	char		*ret;

	len = 0;
	while (src[len])
		++len;
	ret = (char*)malloc(len + 1);
	ret[len] = 0;
	len = 0;
	while (src[len])
	{
		ret[len] = src[len];
		len++;
	}
	return (ret);
}
