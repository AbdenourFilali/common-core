#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	n;

	if (power < 0)
		return (0);
	if(power == 0)
		return (1);
	n = nb;
	while(power > 1)
	{
		nb = nb * n;
		power--;
	}
	return (nb);
}

int	main(void)
{
	int	nb, power;

	nb = 5;
	power = -1;
	printf("%d\n", ft_iterative_power(nb, power));
}
