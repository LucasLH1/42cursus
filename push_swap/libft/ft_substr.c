/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:25:49 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/09 11:23:15 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_values(char const *s, unsigned int start, size_t len)
{
	if (start > ft_strlen(s))
		return (len = 0);
	if (len > ft_strlen(s) - start)
		return (len = ft_strlen(s) - start);
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	ptr = malloc(sizeof(char) * (ft_check_values(s, start, len) + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			ptr[j] = s[i];
			j++;
		}
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}
