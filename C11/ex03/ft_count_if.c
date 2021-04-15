/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 01:29:02 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/14 01:48:11 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int cnt;

	cnt = 0;
	while (length--)
		if (f(tab[length]) != 0)
			++cnt;
	return (cnt);
}
