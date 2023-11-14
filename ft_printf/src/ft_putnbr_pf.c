/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:47:18 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/14 11:11:16 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/ft_printf.h"

int	ft_putnbr_pf(int nbr)
{
	char	*number;
	char	len;

	number = ft_itoa(nbr);
	len = ft_strlen(number);
	ft_putstr_fd(number, 1);
	free(number);
	return (len);
}
