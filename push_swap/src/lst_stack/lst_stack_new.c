/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_stack_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:36:46 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/30 17:48:26 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*stack_lstnew(int content, int index)
{
	t_stack	*lst;

	lst = malloc(sizeof(*lst));
	if (!lst)
		return (NULL);
	lst->nbr = content;
	lst->index = index;
	lst->next = NULL;
	return (lst);
}
