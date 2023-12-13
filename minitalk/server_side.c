/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_side.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:40:14 by llahaye           #+#    #+#             */
/*   Updated: 2023/12/13 15:06:35 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "minitalk.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
# define _XOPEN_SOURCE 700

void sig_handler(int signo, siginfo_t *si)
{
    if (signo == SIGKILL)
        printf("%s\n",si->si_value);
}

int main(void)
{

	int	pid;
    struct sigaction sa;

	pid = getpid();

	sigemptyset(&sa.sa_mask);
	sa.sa_sigaction = sig_handler;
	sa.sa_flags = SA_SIGINFO; /* Important. */

	sigaction(SIGUSR1, &sa, NULL);
	ft_putstr_fd("		MINITALK SERVER SIDE		\n\n", 1);
	ft_putstr_fd("	Server : OK\n", 1);
	ft_putstr_fd("	PID : ", 1);
	ft_putnbr_fd(pid, 1);
	ft_putstr_fd("\n\n", 1);
    while (1)
    {
        sleep(1);
    }
    return 0;
}
