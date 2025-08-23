#include "Push_swap.h"

int main(int argc, char **argv)
{   
    if(argc == 1 || (argc > 1 && !argv[1][0]))
    {
        ft_printf("Error\n");
        return (1);
    }
    else if (argc == 2)
    {
        argc = word_count(argv[1], ' ') + 1;
        argv = my_ft_split(argv[1], ' ');
        
    }
    if(!(is_number(argc, argv)))
    {
        ft_printf("Errorn\n");
        return (1);
    }
    if (!(check_dup(argc, argv)))
    {
        ft_printf("Errordup\n");
        return (1);
    }
    return (0);
}


