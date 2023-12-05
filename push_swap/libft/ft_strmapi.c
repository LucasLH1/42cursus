/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:04:09 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/06 10:11:00 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	i;

	if (s && f)
	{
		res = (char *)malloc(ft_strlen(s) + 1);
		if (res == NULL)
			return (NULL);
		i = 0;
		while (s[i])
		{
			res[i] = (*f)(i, ((char)s[i]));
			i++;
		}
		res[i] = '\0';
		return (res);
	}
	res = NULL;
	return (res);
}
