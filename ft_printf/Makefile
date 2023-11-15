# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llahaye <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 11:21:06 by llahaye           #+#    #+#              #
#    Updated: 2023/11/15 18:14:44 by llahaye          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

LIBFT_PATH	=	./libft
LIBFT	=	$(LIBFT_PATH)/libft.a

CC	=	clang
CFLAGS	=	-Wall -Wextra -Werror

RM	=	rm -f

AR	=	ar
ARFLAGS	=	rcs
SOURCES	=	./src/ft_printf.c \
			./src/ft_convert_hexa.c \
			./src/ft_putchar_pf.c \
			./src/ft_putnbr_pf.c \
			./src/ft_putpercent_pf.c \
			./src/ft_putstr_pf.c \
			./src/ft_putunbr_pf.c \
			./src/ft_convert_ptr.c

OBJECTS	=	$(SOURCES:.c=.o)

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(LIBFT_PATH)

all:	$(LIBFT) $(NAME)

$(LIBFT):
		make -C $(LIBFT_PATH)

$(NAME):	$(OBJECTS)
			cp $(LIBFT) $(NAME)
			$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

clean:
		make clean -C $(LIBFT_PATH)
		$(RM) $(OBJECTS)

fclean:	clean
		make fclean -C $(LIBFT_PATH)
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re libft
