NAME = pushswap

SOURCES	=	./src/check_errors.c \
			./src/push_swap.c \
			./src/utils.c \
			./src/init_stacks.c \
			./src/algo.c \
			./src/lst_stack/lst_stack_addback.c \
			./src/lst_stack/lst_stack_new.c \
			./src/lst_stack/lst_stack_last.c \
			./libft/ft_atoi.c \
			./libft/ft_isdigit.c \
			./libft/ft_putstr_fd.c \
			./libft/ft_strlen.c \
			./src/operations/operations_1.c \
			./src/operations/operations_2.c

OBJECTS	=	$(SOURCES:.c=.o)

FLAGS = -Werror -Wall -Wextra

.c.o:
		$(CC) -c $(FLAGS) -o $@ $<

$(NAME): $(MAIN) $(OBJECTS)
	gcc $(FLAGS) -o pushswap $(MAIN) $(OBJECTS)

all:	$(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re:		fclean all

