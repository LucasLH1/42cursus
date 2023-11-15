/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:02:53 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/15 18:14:03 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/ft_printf.h"

static int	ft_hex_len(unsigned	int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

static void	ft_convert_uphexa(unsigned int n, char format)
{
	if (n >= 16)
	{
		ft_convert_uphexa(n / 16, format);
		ft_convert_uphexa(n % 16, format);
	}
	else
	{
		if (n < 10)
			ft_putchar_fd((n + '0'), 1);
		else
			ft_putchar_fd((n - 10 + 'A'), 1);
	}
}

static void	ft_convert_lowhexa(unsigned int n, char format)
{
	if (n >= 16)
	{
		ft_convert_lowhexa(n / 16, format);
		ft_convert_lowhexa(n % 16, format);
	}
	else
	{
		if (n < 10)
			ft_putchar_fd((n + '0'), 1);
		else
			ft_putchar_fd((n - 10 + 'a'), 1);
	}
}

int	ft_convert_hexa(unsigned int n, char format)
{
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	else if (format == 'x')
		ft_convert_lowhexa(n, format);
	else if (format == 'X')
		ft_convert_uphexa(n, format);
	return (ft_hex_len(n));
}
