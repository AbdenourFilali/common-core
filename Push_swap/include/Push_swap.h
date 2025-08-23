#ifndef FT_PUSH_SWAP_H
#define FT_PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include "../lib/ft_printf/ft_printf.h"
#include "../lib/libft/libft.h"

typedef struct  s_stack
{
    int     value;
    struct  s_stack *next;
}   t_stack;

int main(int argc, char **argv);
int is_number(int argc, char **argv);
int my_ft_atoi(char *str);
int check_dup(int argc, char **argv);
size_t	word_count(const char *s, char c);
char    **my_ft_split(char const *s, char c);

#endif