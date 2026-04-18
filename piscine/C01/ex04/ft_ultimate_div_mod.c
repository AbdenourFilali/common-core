#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int div, mod;

	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;
}
int	main(void)
{
	int a, b;
	a = 10;
	b = 3;
	printf("a = %d b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d b = %d\n", a, b);

}
