# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llahaye <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 11:21:06 by llahaye           #+#    #+#              #
#    Updated: 2024/01/11 18:48:41 by llahaye          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = Minitalk

CLIENT_SRC = client.c error_handler.c
CLIENT_OBJ = $(CLIENT_SRC:.c=.o)
CLIENT_TARGET = client

SERVER_SRC = server.c
SERVER_OBJ = $(SERVER_SRC:.c=.o)
SERVER_TARGET = server

LIBFT_DIR = ./libft
LIBFT_TARGET = $(LIBFT_DIR)/libft.a

all: $(LIBFT_TARGET) $(CLIENT_TARGET) $(SERVER_TARGET)

$(LIBFT_TARGET):
	@make -C $(LIBFT_DIR)

$(CLIENT_TARGET): $(CLIENT_OBJ)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBFT_TARGET)

$(SERVER_TARGET): $(SERVER_OBJ)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBFT_TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

bonus: $(LIBFT_TARGET) server_bonus.o client_bonus.o error_handler_bonus.o
	@make -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) -o server_bonus server_bonus.o $(LIBFT_TARGET)
	$(CC) $(CFLAGS) -o client_bonus error_handler_bonus.o client_bonus.o $(LIBFT_TARGET)

clean:
	rm -f $(CLIENT_OBJ) $(SERVER_OBJ) error_handler.o
	rm -rf server_bonus.o client_bonus.o error_handler_bonus.o
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(CLIENT_TARGET) $(SERVER_TARGET) $(CLIENT_TARGET)_bonus $(SERVER_TARGET)_bonus error_handler_bonus.o
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re bonus
