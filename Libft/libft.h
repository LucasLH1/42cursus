/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:09:55 by llahaye           #+#    #+#             */
/*   Updated: 2023/10/31 17:36:52 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned int	t_size_t;

void		*ft_memset(void *s, int c, t_size_t n);
void		ft_bzero(void *s, t_size_t n);
void		*ft_memcpy(void *dest, const void *src, t_size_t n);
t_size_t	ft_strlen(const char *s);


#endif
