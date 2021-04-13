/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 21:31:50 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/13 22:04:20 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int		len_strs(char **strs, int size)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		len;

	i = 1;
	if (size <= 0 || strs == NULL || sep == NULL)
	{
		if (!(str = malloc(1)))
			return (0);
		str[0] = '\0';
		return (str);
	}
	len = len_strs(strs, size);
	if (!(str = malloc((sizeof(char)) * len
					+ ft_strlen(sep) * (size - 1) + 1)))
		return (0);
	str = ft_strcpy(str, strs[0]);
	while (i < size)
	{
		str = ft_strcat(str, sep);
		str = ft_strcat(str, strs[i]);
		i++;
	}
	return (str);
}
#include <stdio.h>
int		main(void)
{
	char *strs[] = {"", "", ""};
	char *sep = ",";
	printf("%s", ft_strjoin(3, strs, sep));
}
