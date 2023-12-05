/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:54:06 by llahaye           #+#    #+#             */
/*   Updated: 2023/12/01 14:32:35 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void sort_stack(t_stack *stack_a, t_stack *stack_b)
{
	(void)stack_b;
	while (stack_a)
	{
		printf("%d - %d\n",stack_a->nbr, stack_a->index);
		stack_a=stack_a->next;
	}
}
