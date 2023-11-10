# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llahaye <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 11:21:06 by llahaye           #+#    #+#              #
#    Updated: 2023/11/10 11:21:08 by llahaye          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ft_printf.a
CC			=	cc
CCFLAG		=	-Wall -Wextra -Werror

HDR_DIR		=	./includes/
HDR_FILE	=	ft_printf.h

HEADERS		=	$(addprefix $(HDR_DIR), $(HDR_FILE))


SRC_DIR		=	./src/
SRC_FILE	=	ft_printf.c

SOURCES		=	$(addprefix $(SRC_DIR), $(SRC_FILE))


OBJ_DIR		=	./obj/
OBJ_FILE	=	$(patsubst %.c, %.o, $(SRC_FILE))
OBJECTS		=	$(addprefix $(OBJ_DIR), $(OBJ_FILE))


all			:	$(NAME)

$(NAME)		:	$(OBJ_DIR) $(OBJECTS)
		ar -rcs $(NAME) $(OBJECTS)
		@echo "\033[0;92m* $(NAME) library file was created *\033[0m"

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
		@$(CC) $(CCFLAGS) -c $< -o $@

clean		:
		rm -rf $(OBJECTS)
		@echo "\033[0;91m* $(NAME) object files was deleted *\033[0m"

fclean		:	clean
		rm -rf $(NAME)
		@echo "\033[0;91m* $(NAME) was deleted *\033[0m"

re			:	fclean $(NAME)

.PHONY		:	all clean fclean re
