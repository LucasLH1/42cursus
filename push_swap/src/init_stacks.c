/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:24:53 by llahaye           #+#    #+#             */
/*   Updated: 2023/12/08 08:48:35 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void start_process(char **argv)
{
	int		i;
	t_stack	*stack_a;
	t_stack *stack_b;
	t_stack *new_stack;

	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	while (argv[i])
	{
		new_stack = stack_lstnew(ft_atoi(argv[i]), i -1);
		stack_lstadd_back(&stack_a, new_stack);
		new_stack = NULL;
		i++;
	}
	rb(&stack_a, 0);
	while (stack_a)
	{
		printf("\n%d - %d",stack_a->nbr, stack_a->index);
		stack_a=stack_a->next;
	}
	printf("\n\n\n");
	while (stack_b)
	{
		printf("\n%d - %d",stack_b->nbr, stack_b->index);
		stack_b=stack_b->next;
	}
}
