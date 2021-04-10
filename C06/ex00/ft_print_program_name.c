/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <sanghyle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:51:01 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/08 22:20:15 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	ch;

	ch = argc - 1;
	while (argv[0][ch])
		write(1, argv[ch]++, 1);
	write(1, "\n", 1);
	return (0);
}
