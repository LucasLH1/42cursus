/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:10:49 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/15 18:18:06 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/ft_printf.h"

static int	ft_getformat(va_list args, char c)
{
	int	total_length;

	total_length = 0;
	if (c == 'c')
		total_length += ft_putchar_pf(va_arg(args, int));
	else if (c == 's')
		total_length += ft_putstr_pf(va_arg(args, char *));
	else if (c == 'i' || c == 'd')
		total_length += ft_putnbr_pf(va_arg(args, int));
	else if (c == 'u')
		total_length += ft_putunbr_pf(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		total_length += ft_convert_hexa(va_arg(args, unsigned int), c);
	else if (c == '%')
		total_length += ft_putpercent_pf();
	else if (c == 'p')
		total_length += ft_put_ptr(va_arg(args, unsigned long long));
	return (total_length);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		total_length;

	i = 0;
	total_length = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			total_length += ft_getformat(args, s[i + 1]);
			i++;
		}
		else
		{
			ft_putchar_fd(s[i], 1);
			total_length++;
		}
		i++;
	}
	va_end(args);
	return (total_length);
}
