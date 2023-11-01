/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:58:20 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/01 14:03:24 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, t_size_t n)
{
	t_size_t	i;
	char		*src_string;
	char		*dest_string;

	dest_string = (char *)dest;
	src_string = (char *)src;
	i = 0;
	if (!src && !dest)
		return (0);
	while (i < n)
	{
		*dest_string = *src_string;
		dest_string++;
		src_string++;
		i++;
	}
	return (dest);
}
