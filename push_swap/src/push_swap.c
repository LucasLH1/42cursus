/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:55:12 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/30 18:47:37 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "stdio.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	if (!check_args(argv))
	{
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
	start_process(argv);

}
