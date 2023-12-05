/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:16:19 by llahaye           #+#    #+#             */
/*   Updated: 2023/12/01 15:27:23 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(t_stack **stack_a, int toShow)
{
	t_stack	*tmp;

	if (!*stack_a || !((*stack_a)->next))
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_a)->next;
	(*stack_a)->next = tmp;
	if (toShow == 1)
		ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack **stack_b, int toShow)
{
	t_stack	*tmp;

	if (!*stack_b || !((*stack_b)->next))
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = (*stack_b)->next;
	(*stack_b)->next = tmp;
	if (toShow == 1)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack **stack_a, t_stack **stack_b, int toShow)
{
	if (!*stack_a || !((*stack_a)->next) || !*stack_b || !((*stack_b)->next))
		return ;
	sa(stack_a, 0);
	sb(stack_b, 0);
	if (toShow == 1)
		ft_putstr_fd("ss\n", 1);
}

void	pa(t_stack **stack_a, t_stack **stack_b, int toShow)
{
	t_stack	*tmp;

	if (!*stack_b)
		return ;
	tmp = *stack_a;
	*stack_a = *stack_b;
	*stack_b = (*stack_b)->next;
	(*stack_a)->next = tmp;
	if (toShow == 1)
		ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack **stack_a, t_stack **stack_b, int toShow)
{
	t_stack	*tmp;

	if (!*stack_a)
		return ;
	tmp = *stack_b;
	*stack_b = *stack_a;
	*stack_a = (*stack_a)->next;
	(*stack_b)->next = tmp;
	if (toShow == 1)
		ft_putstr_fd("pa\n", 1);
}
