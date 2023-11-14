/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:44:24 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/14 11:13:56 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/ft_printf.h"

int	ft_putunbr_pf(unsigned int nbr)
{
	char	*number;
	char	len;

	number = ft_itoa((int) nbr);
	len = ft_strlen(number);
	ft_putstr_fd(number, 1);
	free(number);
	return (len);
}

