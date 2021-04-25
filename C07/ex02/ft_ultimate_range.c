/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 00:20:49 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/21 07:39:48 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int atoi;
	int *temp;

	if (min >= max)
		return (0);
	atoi = max - min;
	*range = (int*)malloc(sizeof(int) * atoi);
	if (*range == 0)
		return (-1);
	temp = *range;
	while (min < max)
		*(temp++) = min++;
	return (atoi);
	free(range);
}
