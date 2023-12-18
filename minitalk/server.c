/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_side.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:17:52 by llahaye           #+#    #+#             */
/*   Updated: 2023/12/18 01:23:15 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	ft_signal_receiver(int signum, siginfo_t *info, void *context)
{
	static int	c = 0;
	static int bit = 7;

	(void)info;
	(void)context;
	if (signum == SIGUSR1)
		c += 1 << bit;
	else if (signum == SIGUSR2)
		c += 0 << bit;
	bit--;
	if (bit == -1)
	{
		ft_putchar_fd(c, 1);
		bit = 7;
		c = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_sigaction = ft_signal_receiver;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&sa.sa_mask);
	ft_putstr_fd("\x1b[1;32m			MINITALK", 1);
	ft_putstr_fd("\n\n\x1b[0m\x1b[1m\x1b[34mPID : ", 1);
	ft_putstr_fd(ft_itoa(getpid()), 1);
	ft_putstr_fd("\x1b[0m\n\n", 1);
	while (1)
	{
		sigaction(SIGUSR1, &sa, NULL);
		sigaction(SIGUSR2, &sa, NULL);
		pause();
	}
}
