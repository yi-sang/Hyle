/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 01:47:08 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/14 01:47:58 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int norm;
	int tmp;

	norm = 0;
	while (length-- > 1)
	{
		tmp = f(tab[length], tab[length - 1]);
		if (tmp == 0)
			continue;
		if (norm == 0)
			norm = tmp;
		else if ((norm < 0 && tmp > 0) || (norm > 0 && tmp < 0))
			return (0);
	}
	return (1);
}
