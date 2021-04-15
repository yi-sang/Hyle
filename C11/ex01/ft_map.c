/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 01:04:20 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/14 01:12:27 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *aray;
	int i;

	aray = (int*)malloc(sizeof(int) * length);
	i = -1;
	while (++i < length)
		aray[i] = f(tab[i]);
	return (aray);
}
