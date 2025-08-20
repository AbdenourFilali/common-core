# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abfilali <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/26 02:07:53 by abfilali          #+#    #+#              #
#    Updated: 2025/04/30 15:14:56 by abfilali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

PART1 = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	 ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
	 ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	 ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	 ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	 ft_atoi.c ft_calloc.c ft_strdup.c

PART2 = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRC = $(PART1) $(PART2)


OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
