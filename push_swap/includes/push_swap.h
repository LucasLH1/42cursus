/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:48:51 by llahaye           #+#    #+#             */
/*   Updated: 2023/12/02 14:33:41 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	int				nbr;
	int				index;
	struct s_stack	*next;
}	t_stack;

void	stack_lstadd_back(t_stack **lst, t_stack *new);
void	stack_lstadd_front(t_stack **lst, t_stack *new);
t_stack	*stack_lstlast(t_stack *lst);
t_stack	*stack_lstnew(int content, int index);
void	start_process(char **argv);
void 	sort_stack(t_stack *stack_a, t_stack *stack_b);
int		stack_lstsize(t_stack *lst);
int		ft_isnumber(char *arg);
int		check_args(char **argv);
int		check_if_dbl(int n, char **argv);

void 	sa(t_stack **stack_a, int j);
void	sb(t_stack **stack_b, int toShow);
void	ss(t_stack **stack_a, t_stack **stack_b, int toShow);
void	pa(t_stack **stack_a, t_stack **stack_b, int toShow);
void	pb(t_stack **stack_a, t_stack **stack_b, int toShow);
void	ra(t_stack **stack_a, int toShow);

#endif
