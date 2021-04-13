/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 00:20:33 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/12 03:03:27 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *atoi;
	int *temp;

	if (min >= max)
		return (0);
	atoi = (int*)malloc(sizeof(int) * ((long long)max - min));
	if (!atoi)
		return (0);
	temp = atoi;
	while (min < max)
		*(temp++) = min++;
	return (atoi);
	free(atoi);
}
