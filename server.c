/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:18:15 by adunal            #+#    #+#             */
/*   Updated: 2023/05/27 14:20:46 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sig_usr(int sig)
{
	static char	str;
	static int	i = 0;

	if (sig == 30)
		str = str | 1;
	i++;
	if (i == 8)
	{
		write(1, &str, 1);
		i = 0;
		str = 0;
	}
	else
		str = str << 1;
}

int	main(void)
{
	char	*str;

	str = ft_itoa(getpid());
	write(1, str, len(getpid()));
	free(str);
	write(1, "\nWaiting for a message...", 26);
	write(1, "\n", 1);
	while (1)
	{
		signal(SIGUSR1, sig_usr);
		signal(SIGUSR2, sig_usr);
		pause();
	}
	return (0);
}
