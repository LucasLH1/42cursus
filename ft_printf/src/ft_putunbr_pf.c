/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:44:24 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/15 12:58:46 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/ft_printf.h"

static int	ft_count_digits(unsigned	int num)
{
	int	len;

	len = 0;
	while (num > 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

static char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_count_digits(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

int	ft_putunbr_pf(unsigned int nbr)
{
	char	*number;
	char	len;

	len = 0;
	if (nbr == 0)
	{
		len = 1;
		ft_putchar_fd('0', 1);
	}
	else
	{
		number = ft_uitoa(nbr);
		len = ft_strlen(number);
		ft_putstr_fd(number, 1);
		free(number);
	}
	return (len);
}
