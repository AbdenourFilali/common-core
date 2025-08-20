#ifndef FT_PUSH_SWAP_H
#define FT_PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include "../lib/ft_printf/ft_printf.h"

typedef struct  s_stack
{
    int     value;
    struct  s_stack *next;
}   t_stack;

int main(int argc, char **argv);
int is_number(int argc, char **argv);
int ft_atoi(char *str);

#endif