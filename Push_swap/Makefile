NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -g -Iinclude -Ilib/ft_printf -Ilib/libft

SRC = src/Push_swap.c \
	  src/check_args.c \
	  src/my_split.c
      # voeg hier je andere .c bestanden toe

OBJ = $(SRC:.c=.o)

LIBFTPRINTF = lib/ft_printf/libftprintf.a
LIBFT       = lib/libft/libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFTPRINTF) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFTPRINTF) $(LIBFT) -o $(NAME)

$(LIBFTPRINTF):
	make -C lib/ft_printf
$(LIBFT):
	make -C lib/libft

clean:
	rm -f $(OBJ)
	make -C lib/ft_printf clean

fclean: clean
	rm -f $(NAME)
	make -C lib/ft_printf fclean

re: fclean all

.PHONY: all clean fclean re
