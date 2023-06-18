/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:18:00 by adunal            #+#    #+#             */
/*   Updated: 2023/05/27 14:20:01 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_itoa(int a);
int		ft_atoi(const char *str);
int		len(int a);
void	getbit(int pid, char *str);
void	sig_usr(int sig);

#endif
