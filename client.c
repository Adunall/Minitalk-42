/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:16:56 by adunal            #+#    #+#             */
/*   Updated: 2023/05/27 14:19:15 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	getbit(int pid, char *str)
{
	int		i;
	char	c;

	while (*str)
	{
		i = 7;
		c = *str++;
		while (i >= 0)
		{
			if (c >> i & 1)
				kill(pid, 30);
			else
				kill(pid, 31);
			usleep(100);
			i--;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		getbit(ft_atoi(argv[1]), argv[2]);
		getbit(ft_atoi(argv[1]), "\n");
	}
	else
	{
		write(1, "Error: wrong format.\n", 22);
		write(1, "Try: ./client <PID> <MESSAGE>\n", 31);
	}
	return (0);
}
