#include "Push_swap.h"

int check_dup(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    while(i < argc)
    {
        j = i + 1;
        while(j < argc)
        {
            if(my_ft_atoi(argv[i]) == my_ft_atoi(argv[j]))
                return (0);
            j++;
        }
        i++;
    }
    return (1);

}

int is_number(int argc, char **argv)
{
    int i;
    int j;
    long long nbr;

    i = 1;
    while (i < argc)
    {
        j = 0;
        if(argv[i][0] == '-' || argv[i][0] == '+')
        {
            j++;
        }
        while(argv[i][j] != '\0')
        {
            if(argv[i][j] < '0' || argv[i][j] > '9')
            {
                ft_printf("Errorl\n");
                return (1);
            }
            j++;
        }
        nbr = my_ft_atoi(argv[i]);
        if (nbr == -1)
        {
            ft_printf("Errorb\n");
            return (1);
        }
        ft_printf("%d\n", (int)nbr);
        
        i++;
    }
    return (1);
}

int my_ft_atoi(char *str)
{
    long long nb;
    int sign;

    sign = 1;
    nb = 0;
    while(*str == '-' || *str == '+')
    {
        if(*str == '-')
            sign *= -1;
        str++;
    }
    while(*str >= '0' && *str <= '9')
    {
        nb = (nb * 10) + (*str - '0');
        str++;
    }
    nb = nb * sign;
    if (nb > 2147483647 || nb < -2147483648)
    {
        ft_printf("Errorm\n");
        return -1;
    }
    return ((int)nb);
}