/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:11:28 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/14 11:15:51 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		ft_putchar_pf(char c);
int		ft_putstr_pf(char *s);
int		ft_putnbr_pf(int nbr);
int		ft_putunbr_pf(unsigned int nbr);

#endif