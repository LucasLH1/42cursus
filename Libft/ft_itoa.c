/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:20:57 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/06 10:06:44 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	lengths(int n, size_t *size, int *num)
{
	*size = 1;
	if (n >= 0)
	{
		*size = 0;
		n = -n;
	}
	*num = 1;
	while (n / *num < -9)
	{
		*num *= 10;
		*size += 1;
	}
}

char	*ft_itoa(int n)
{
	size_t		size;
	int			num;
	size_t		i;
	char		*str;

	lengths(n, &size, &num);
	str = (char *)malloc(sizeof(*str) * (size + 2));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		str[i] = '-';
		i++;
	}
	if (n > 0)
		n = -n;
	while (num >= 1)
	{
		str[i++] = -(n / num % 10) + '0';
		num /= 10;
	}
	str[i] = '\0';
	return (str);
}
