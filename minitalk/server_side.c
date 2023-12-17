/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_side.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:17:52 by llahaye           #+#    #+#             */
/*   Updated: 2023/12/17 23:38:37 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include "libft/libft.h"

void	ft_server_handler(int signum, siginfo_t *info, void *context)
{
	static int	c = 0;
	static int	bit = 7;

	(void)info;
	(void)context;
	if (signum == SIGUSR1)
		c += 1 << bit;
	else if (signum == SIGUSR2)
		c += 0 << bit;
	bit--;
	if (bit == -1)
	{
		write(1, &c, 1);
		bit = 7;
		c = 0;
	}
}

int	main(void)
{
	struct sigaction	sigact;

	printf("PID : %d\n", getpid());
	sigact.sa_sigaction = ft_server_handler;
	sigact.sa_flags = SA_SIGINFO;
	sigemptyset(&sigact.sa_mask);
	printf("%d", getpid());
	write(1, "\n", 1);
	while (1)
	{
		sigaction(SIGUSR1, &sigact, NULL);
		sigaction(SIGUSR2, &sigact, NULL);
		pause();
	}
}
