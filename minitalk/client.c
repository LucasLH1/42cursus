/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_side.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 22:43:47 by llahaye           #+#    #+#             */
/*   Updated: 2023/12/18 02:05:21 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	ft_send_bits(int pid, int c)
{
	int	bit;

	bit = 7;
	while (bit != -1)
	{
		if (1 & (c >> bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bit--;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		pid;
	unsigned char	*str;

	(void)argc;
	if (!ft_check_args(argc, argv))
		return (0);
	i = 0;
	pid = ft_atoi(argv[1]);
	str = (unsigned char *)argv[2];
	while (str[i])
	{
		ft_send_bits(pid, str[i]);
		i++;
	}
	ft_send_bits(pid, '\n');
}
