/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 22:43:47 by llahaye           #+#    #+#             */
/*   Updated: 2023/12/20 14:40:01 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <stdio.h>

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
		usleep(1000);
		bit--;
	}
}

static void	ft_send_binary(int pid, char *binary_str)
{
	int	i;

	i = 0;
	while (binary_str[i])
	{
		if (binary_str[i] == '1')
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(1000);
		i++;
	}
	if (binary_str[i] == '\0')
	{
		printf("end");
		ft_send_terminated_string(pid);
	}
}

static char	*ft_str_to_binary(unsigned char *str)
{
	int		bit;
	int		i;
	int		j;
	char	*binary_str;

	i = 0;
	binary_str = malloc(ft_strlen((char *)str) * 8 + 1);
	j = 0;
	while (str[i])
	{
		bit = 7;
		while (bit >= 0)
		{
			if (str[i] & (1 << bit))
				binary_str[j] = '1';
			else
				binary_str[j] = '0';
			bit--;
			j++;
		}
		i++;
	}
	binary_str[ft_strlen((char *)str) * 8 + 1] = '\0';
	return (binary_str);
}

int	main(int argc, char **argv)
{
	int				pid;
	unsigned char	*str;
	char			*binary_str;

	(void)argc;
	if (!ft_check_args(argc, argv))
		return (0);
	pid = ft_atoi(argv[1]);
	str = (unsigned char *)argv[2];
	binary_str = ft_str_to_binary(str);
	ft_send_binary(pid, binary_str);
}
