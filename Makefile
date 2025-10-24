NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = libft_split.c libft_utils.c main.c \
	  radix.c arg_size.c main_utils.c operations.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
