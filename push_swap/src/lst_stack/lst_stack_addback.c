/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_stack_addback.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:39:42 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/30 17:50:44 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	stack_lstadd_back(t_stack **lst, t_stack *new)
{
	if (lst)
	{
		if (*lst)
			stack_lstlast(*lst)->next = new;
		else
			*lst = new;
	}
}
