#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	i = 0;

	while(str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
int main(void)
{
	printf("%d\n", ft_str_is_numeric("123456")); // Output: 1
	printf("%d\n", ft_str_is_numeric("123a56")); // Output: 0
	printf("%d\n", ft_str_is_numeric(""));       // Output: 1
	printf("%d\n", ft_str_is_numeric(" "));      // Output: 0 (spatie is geen getal!)
}
