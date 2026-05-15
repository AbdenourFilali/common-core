NAME	= libft.a
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strlen.c\
	  srcs/ft_swap.c\
	  srcs/ft_strcmp.c
OBJS	=$(notdir  $(SRCS:.c=.o))
all: $(NAME)

$(NAME): $(SRCS)
	$(CC) -c $(CFLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
