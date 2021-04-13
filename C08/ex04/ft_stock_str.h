/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 02:54:15 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/11 03:02:19 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

# include <unistd.h>

typedef struct	s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}				t_stock_str;
#endif
