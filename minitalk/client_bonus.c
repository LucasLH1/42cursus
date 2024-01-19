/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 18:09:05 by llahaye           #+#    #+#             */
/*   Updated: 2024/01/18 15:57:25 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

static void	ft_send_terminated_string(int pid)
{
	int	bit;

	bit = 7;
	while (bit != -1)
	{
		if (1 & ('\0' >> bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(500);
		bit--;
	}
}

static void	ft_send_str_to_binary(int pid, unsigned char *str)
{
	int		bit;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		bit = 7;
		while (bit >= 0)
		{
			if (str[i] & (1 << bit))
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(500);
			bit--;
			j++;
		}
		i++;
	}
	if (str[i] == '\0')
		ft_send_terminated_string(pid);
}

static void	signal_handler(int signum)
{
	if (signum == SIGUSR1)
		ft_putstr_fd("Message received", 1);
}

int	main(int argc, char **argv)
{
	int				pid;
	unsigned char	*str;

	signal(SIGUSR1, signal_handler);
	if (!ft_check_args(argc, argv))
		return (0);
	pid = ft_atoi(argv[1]);
	str = (unsigned char *)argv[2];
	ft_send_str_to_binary(pid, str);
}
