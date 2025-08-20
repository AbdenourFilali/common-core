#include "Push_swap.h"

int main(int argc, char **argv)
{   
    if(argc < 2)
    {
        ft_printf("niet genoeg argumenten\n");
        return -1;
    }
    if(!(is_number(argc, argv)))
    {
        ft_printf("Error\n");
        return 0;
    }
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
                return -1;
            }
            j++;
        }
        nbr = ft_atoi(argv[i]);
        ft_printf("%d\n", (int)nbr);
        
        i++;
    }
    return 1;
}

int ft_atoi(char *str)
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
        ft_printf("Errorbijlimit\n");
        exit(1);
    }
    return ((int)nb);
}