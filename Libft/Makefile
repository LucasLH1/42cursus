# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llahaye <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 11:31:09 by llahaye           #+#    #+#              #
#    Updated: 2023/11/08 11:31:13 by llahaye          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ = $(SRC:%.c=%.o)
CFLAGS = -g -Wall -Werror -Wextra
CC = clang
NAME = libft
SRC= $(wildcard *.c)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	ar -crs libft.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

.PHONY: all clean fclean re
