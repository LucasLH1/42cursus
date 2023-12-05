/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:39:35 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/21 17:07:06 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	ptr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
	{
		ptr[i++] = s1[j];
		j++;
	}
	j = 0;
	while (s2[j])
	{
		ptr[i++] = s2[j];
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
