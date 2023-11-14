/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:10:49 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/13 16:07:15 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/ft_printf.h"

static void	ft_getformat(va_list args, char c, int total_length)
{
	if (c == 'c')
		total_length += ft_putchar_pf(va_arg(args, int), 1);
	else if (c == 's')
		total_length += ft_putstr_pf(va_arg(args, char *), 1);
	else if (c == 'd' || c == 'i')
		ft_putnbr_fd(va_arg(args, int), 1);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		total_length;

	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			ft_getformat(args, s[i + 1]);
			i++;
		}
		else
			ft_putchar_fd(s[i], 1);
		i++;
	}
	va_end(args);
	return (1);
}

int main(void)
{
	ft_printf("Bonjour %s %d oui", "Toi", 10);
}
