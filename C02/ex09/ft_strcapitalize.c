/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 02:46:41 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/05 01:08:09 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_number(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int		is_lowercase(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int		is_uppercase(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int		is_char_of_word(char c)
{
	if (is_number(c))
		return (1);
	if (is_uppercase(c))
		return (1);
	if (is_lowercase(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int first_flag;

	i = 0;
	first_flag = 1;
	while (str[i])
	{
		if (!is_char_of_word(str[i]))
			first_flag = 1;
		else
		{
			if (first_flag == 1 && is_lowercase(str[i]) == 1)
				str[i] = str[i] - 32;
			else if (first_flag == 0 && is_uppercase(str[i]) == 1)
				str[i] = str[i] + 32;
			first_flag = 0;
		}
		++i;
	}
	return (str);
}
