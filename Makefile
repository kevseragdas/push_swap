NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = swap.c push.c main.c\
	  rotate.c reverse_rotate.c \ 

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
