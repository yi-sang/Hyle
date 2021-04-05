/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 01:58:17 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/04 01:58:33 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		lowercase(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (lowercase(str[i]))
			str[i] = str[i] - 32;
		++i;
	}
	return (str);
}
