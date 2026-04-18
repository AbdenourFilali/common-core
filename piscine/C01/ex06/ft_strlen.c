#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char *s;
	int	i;
	s = "hello";
	i = ft_strlen(s);
	printf("length s = %d\n", i);
}
