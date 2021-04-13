/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoon <syoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 21:35:08 by syoon             #+#    #+#             */
/*   Updated: 2021/04/11 21:35:09 by syoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strcpy(char *dst, char *start, char *end)
{
	while (start <= end)
		*(dst++) = *(start++);
	*dst = 0;
}

int		ft_strlen(char *str)
{
	int ret;

	ret = 0;
	while (str[ret])
		++ret;
	return (ret);
}

int		ft_is_equal(char *a, char *b)
{
	while (*a && *b && *a == *b)
	{
		++a;
		++b;
	}
	return (*a == *b);
}
