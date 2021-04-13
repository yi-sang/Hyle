/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoon <syoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 21:35:44 by syoon             #+#    #+#             */
/*   Updated: 2021/04/11 21:35:45 by syoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <stdlib.h>

char	*read_line(int fd)
{
	int		i;
	char	*ret;

	i = 0;
	ret = (char*)malloc(100);
	while ((read(fd, &ret[i], 1)))
	{
		g_eof = 0;
		if (ret[i] == '\n')
		{
			ret[i] = 0;
			break ;
		}
		++i;
	}
	return (ret);
}

char	*read_num(void)
{
	int		i;
	char	*ret;

	i = 0;
	ret = (char*)malloc(100);
	while ((read(0, &ret[i], 1)))
	{
		if (ret[i] == '\n')
		{
			ret[i] = 0;
			break ;
		}
		++i;
	}
	return (trim_alloc(ret));
}

void	ft_free(void *ptr)
{
	free(ptr);
	ptr = NULL;
}
