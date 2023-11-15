/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:11:28 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/15 18:16:35 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
int		ft_putchar_pf(char c);
int		ft_putstr_pf(char *s);
int		ft_putnbr_pf(int nbr);
int		ft_putunbr_pf(unsigned int nbr);
int		ft_convert_hexa(unsigned int n, char format);
int		ft_put_ptr(unsigned long long ptr);
int		ft_putpercent_pf(void);

#endif
