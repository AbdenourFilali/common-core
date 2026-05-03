#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if(power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

int	main(void)
{
	int n, p;

	n = 2;
	p = 3;
	printf("%d\n", ft_recursive_power(n, p));
}
