/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <snaghyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:52:20 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/07 23:57:42 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int		cnt;
	int		pre;
	int		twice_pre;
	char	f_ret[index];

	cnt = 0;
	pre = 1;
	twice_pre = 0;
	while (cnt++ <= index)
	{
		if (index == 0)
			return (twice_pre);
		if (index == 1)
			return (pre);
		if (index < 0)
			return (-1);
		f_ret[0] = twice_pre;
		f_ret[1] = pre;
		f_ret[cnt] = f_ret[cnt - 2] + f_ret[cnt - 1];
	}
	return ((int)f_ret[index]);
}
