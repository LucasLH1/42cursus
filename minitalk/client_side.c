/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_side.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:40:18 by llahaye           #+#    #+#             */
/*   Updated: 2023/12/13 15:02:21 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "minitalk.h"
#include <signal.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int	pid;
	if (argc != 3)
		return (1);
	pid = ft_atoi(argv[1]);
	ft_putstr_fd("Message : ", 1);
	ft_putstr_fd(argv[2], 1);
	printf("\n%d\n",pid);
	union sigval sv;
	sv.sival_int = 42;
	sigqueue(pid, SIGUSR1, sv);

}
