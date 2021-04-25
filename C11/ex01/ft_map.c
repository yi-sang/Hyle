/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 22:17:40 by gicho             #+#    #+#             */
/*   Updated: 2021/04/21 08:17:52 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *ret;
	int i;

	ret = (int*)malloc(sizeof(int) * length);
	i = -1;
	while (++i < length)
		ret[i] = f(tab[i]);
	return (ret);
}
