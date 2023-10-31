/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:58:20 by llahaye           #+#    #+#             */
/*   Updated: 2023/10/31 18:41:33 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, t_size_t n)
{
	const char			*char_src;
	char				*char_dest;
	char				*t;
	t_size_t			i;

	char_src = src;
	char_dest = dest;
	i = 0;
	while (i < n)
	{
		t[i] = char_src[i];
		i++;
	}
	t[i] = '\0';
	char_dest = t;
}
