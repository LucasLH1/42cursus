/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:13:44 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/03 13:50:42 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big && len == 0)
		return (NULL);
	if (ft_strlen(little) == 0)
		return ((char *)big);
	i = 0;
	j = 0;
	while (big[i] != '\0' && i < len)
	{
		while (big[i] == little[j])
		{
			j++;
		}
		if (j == ft_strlen(little))
			return ((char *)big + i);
		j = 0;
		i++;
	}
	return (NULL);
}
