NAME	= ft_cat
CC	= gcc
FLAGS	= -Wall -Wextra -Werror
SRCS	= ft_cat.c

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) -o $(NAME) $(SRCS)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean
