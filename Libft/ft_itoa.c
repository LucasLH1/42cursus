/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:20:57 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/03 15:19:47 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	size_t	count;
	int		t;

	t = n;
	count = 0;
	while (t != 0)
	{
		t /= 10;
		count++;
	}
	return (count);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static void	ft_strreverse(char *number)
{
	size_t	length;
	size_t	i;
	char	tmp;

	length = ft_strlen(number);
	i = 0;
	while (i < length / 2)
	{
		tmp = number[i];
		number[i] = number[length - i - 1];
		number[length - i - 1] = tmp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*number;
	size_t	count;
	size_t	i;
	int		is_neg;

	is_neg = 0;
	if (n < 0)
		is_neg = 1;
	i = 0;
	count = count_digits(n);
	number = malloc(sizeof(char) * (count + is_neg +11));
	if (number == NULL)
		return (NULL);
	while (i < count)
	{
		number[i] = ft_abs(n) % 10 + '0';
		n = n / 10;
		i++;
	}
	if (is_neg)
		number[i] = '-';
	ft_strreverse(number);
	return (number);
}
