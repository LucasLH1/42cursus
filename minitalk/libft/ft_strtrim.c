/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:09:31 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/03 13:49:49 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	get_start(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && ft_is_in_set(s1[start], set))
		start++;
	return (start);
}

static size_t	get_end(char const *s1, char const *set)
{
	size_t	end;
	size_t	start;

	start = get_start(s1, set);
	end = ft_strlen(s1);
	while (end > start && ft_is_in_set(s1[end - 1], set))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	if (!s1)
		return (NULL);
	ptr = malloc(sizeof(char) * (get_end(s1, set) - get_start(s1, set) + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = get_start(s1, set);
	while (j < get_end(s1, set))
	{
		ptr[i] = s1[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
