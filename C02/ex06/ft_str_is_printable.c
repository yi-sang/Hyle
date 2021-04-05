/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 04:28:31 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/02 04:56:41 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	printable(char c)
{
	if (' ' <= c && c <= '~')
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!printable(str[i++]))
			return (0);
	return (1);
}
