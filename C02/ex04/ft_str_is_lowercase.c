/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 04:03:35 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/05 03:37:37 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lowercase(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!lowercase(str[i++]))
			return (0);
	return (1);
}
