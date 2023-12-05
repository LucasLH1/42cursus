/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_stack_addfront.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:41:01 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/30 12:09:08 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	stack_lstadd_front(t_stack **lst, t_stack *new)
{
	if (lst)
	{
		if (*lst)
		{
			new->next = *lst;
			*lst = new;
		}
		else
			*lst = new;
	}

}
