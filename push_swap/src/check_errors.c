/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:29:42 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/30 16:01:06 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_if_dbl(int n, char **argv)
{
	int	i;
	int	cptr;

	cptr = 0;
	i = 1;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == n)
			cptr++;
		if (cptr == 2)
			return (0);
		i++;
	}
	return (1);
}

int	check_args(char **argv)
{
	int	i;

	i = 1;
	while(argv[i])
	{
		if(!ft_isnumber(argv[i]))
			return (0);
		if (!check_if_dbl(ft_atoi(argv[i]), argv))
			return (0);
		i++;
	}
	return (1);
}
