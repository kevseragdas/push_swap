NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

PRINTF = ft_printf/libftprintf.a

SRC = libft_split.c libft_utils.c main.c \
	  reverse.c push.c rotate.c swap.c \
	  radix.c arg_size.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C ft_printf
	$(CC) $(CFLAGS) $(OBJ) $(PRINTF) -o $(NAME)

clean:
	make clean -C ft_printf
	rm -f $(OBJ)

fclean: clean
	make fclean -C ft_printf
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
