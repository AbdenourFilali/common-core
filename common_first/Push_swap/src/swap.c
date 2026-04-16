#include "Push_swap.h"

void    swap_a(t_stack **stack_a)
{
    swap(stack_a);
    ft_printf("sa\n");
}

void    swap_b(t_stack **stack_b)
{
    swap(stack_b);
    ft_printf("sb\n");
}

void    swap_a_and_b(t_stack **stack_a, t_stack **stack_b)
{
    swap(stack_a);
    swap(stack_b);
    ft_printf("ss\n");
}

void swap(t_stack **stack)
{
    int tmp;

    if (*stack == NULL || (*stack)->next == NULL)
        return ;
    tmp = (*stack)->value;
    (*stack)->value = (*stack)->next->value;
    (*stack)->next->value = tmp;
}