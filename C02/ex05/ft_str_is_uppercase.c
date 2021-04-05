/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 04:27:38 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/02 04:27:49 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	uppercase(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!uppercase(str[i++]))
			return (0);
	return (1);
}
