#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 0)
	{
		while(nb > 0)
		{
			i = i * nb;
			nb--;
		}
	}
	return (i);
}

int	main(void)
{
	int nb = 8;
	int n = ft_iterative_factorial(nb);
	printf("%d\n", n);
}
