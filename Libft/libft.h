/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:09:55 by llahaye           #+#    #+#             */
/*   Updated: 2023/11/01 14:46:00 by llahaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned int	t_size_t;

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
void		*ft_memset(void *s, int c, t_size_t n);
void		ft_bzero(void *s, t_size_t n);
void		*ft_memcpy(void *dest, const void *src, t_size_t n);
void		*ft_memmove(void *dest, const void *src, t_size_t n);
t_size_t	ft_strlcat(char *dst, const char *src, t_size_t size);
t_size_t	ft_strlcpy(char *dest, const char *src, t_size_t n);
t_size_t	ft_strlen(const char *s);

#endif
