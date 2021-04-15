/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 06:03:53 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/14 06:10:08 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAL_H
# define CAL_H

int		sum(int val1, int val2);
int		sub(int val1, int val2);
int		mul(int val1, int val2);
int		div(int val1, int val2);
int		mod(int val1, int val2);
void	ft_putstr(char *str);
void	rec(int nb);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
#endif
