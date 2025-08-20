NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -g -Iinclude -Ilib/ft_printf

SRC = src/Push_swap.c 
      # voeg hier je andere .c bestanden toe

OBJ = $(SRC:.c=.o)

LIBFTPRINTF = lib/ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFTPRINTF)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFTPRINTF) -o $(NAME)

$(LIBFTPRINTF):
	make -C lib/ft_printf

clean:
	rm -f $(OBJ)
	make -C lib/ft_printf clean

fclean: clean
	rm -f $(NAME)
	make -C lib/ft_printf fclean

re: fclean all

.PHONY: all clean fclean re
