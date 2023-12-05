/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:21:20 by llahaye           #+#    #+#             */
/*   Updated: 2023/12/02 15:38:06 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ra(t_stack **stack_a, int toShow)
{
	t_stack	*tmp;

	tmp = *stack_a;
	*stack_a = stack_lstlast(*stack_a);
	(*stack_a)->next = tmp;
	*stack_a = tmp->next;
	tmp->next = NULL;
	if (toShow == 1)
		ft_putstr_fd("ra\n", 1);
}
