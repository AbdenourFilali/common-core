NAME	= ft_display_file
CC	= gcc
FLAGS	= -Wall -Wextra -Werror
SRCS	= ft_display_file.c

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) -o $(NAME) $(SRCS)
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
