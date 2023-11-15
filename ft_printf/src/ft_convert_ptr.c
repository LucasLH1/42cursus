/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_ptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:55:45 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/15 23:12:07 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/ft_printf.h"

static int	ft_ptr_len(unsigned	long long n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

static void	ft_convert_ptr(unsigned long long n)
{
	if (n >= 16)
	{
		ft_convert_ptr(n / 16);
		ft_convert_ptr(n % 16);
	}
	else
	{
		if (n < 10)
			ft_putchar_fd((n + '0'), 1);
		else
			ft_putchar_fd((n - 10 + 'a'), 1);
	}
}

int	ft_put_ptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
	{
		len += 5;
		ft_putstr_fd("(nil)", 1);
	}
	else
	{
		ft_putstr_fd("0x", 1);
		len = 2;
		ft_convert_ptr(ptr);
		len += ft_ptr_len(ptr);
	}
	return (len);
}
