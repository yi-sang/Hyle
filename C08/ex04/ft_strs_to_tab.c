/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 02:02:06 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/11 02:45:58 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

void				ft_strcpy(char *dest, char *src)
{
	while (*src)
		*(dest++) = *(src++);
	*dest = 0;
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	t_stock_str *stoa;
	int			i;

	stoa = (t_stock_str*)malloc(sizeof(t_stock_str) * (argc + 1));
	if (!stoa)
		return (0);
	i = 0;
	while (i < argc)
	{
		stoa[i].size = ft_strlen(argv[i]);
		stoa[i].str = (char*)malloc(stoa[i].size + 1);
		stoa[i].copy = (char*)malloc(stoa[i].size + 1);
		ft_strcpy(stoa[i].str, argv[i]);
		ft_strcpy(stoa[i].copy, argv[i]);
		++i;
	}
	stoa[i].str = 0;
	return (stoa);
}
