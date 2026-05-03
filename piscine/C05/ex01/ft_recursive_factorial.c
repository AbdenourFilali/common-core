#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if(nb < 0)
		return(0);
	if(nb == 0)
		return(1);

	if(nb > 0)
	i = ft_recursive_factorial((nb - 1));
	return(i);
}

int	main(void)
{
	int nb = 4;

	nb = ft_recursive_factorial(nb);
	printf("%d\n", nb);
}
