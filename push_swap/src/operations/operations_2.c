/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:21:20 by llahaye           #+#    #+#             */
/*   Updated: 2023/12/08 09:13:40 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ra(t_stack **stack_a, int toShow)
{
	t_stack	*tmp;

	if (!*stack_a || !((*stack_a)->next))
		return ;
	tmp = *stack_a;
	*stack_a = stack_lstlast(*stack_a);
	(*stack_a)->next = tmp;
	*stack_a = tmp->next;
	tmp->next = NULL;
	if (toShow == 1)
		ft_putstr_fd("ra\n", 1);
}

void	rb(t_stack **stack_b, int toShow)
{
	t_stack	*tmp;

	if (!*stack_b || !((*stack_b)->next))
		return ;
	tmp = *stack_b;
	*stack_b = stack_lstlast(*stack_b);
	(*stack_b)->next = tmp;
	*stack_b = tmp->next;
	tmp->next = NULL;
	if (toShow == 1)
		ft_putstr_fd("ra\n", 1);
}

void	rr(t_stack **stack_a, t_stack **stack_b, int toShow)
{
	if (!*stack_a || !((*stack_a)->next) || !*stack_b || !((*stack_b)->next))
		return ;
	ra(stack_a, 0);
	rb(stack_b, 0);
	if (toShow == 1)
		ft_putstr_fd("rr\n", 1);
}

void	rra(t_stack **stack_a, int toShow)
{
	t_stack	*tmp;

	if (!*stack_a || !((*stack_a)->next))
		return ;
	
}
