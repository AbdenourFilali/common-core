#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;
	i = 0;
	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char s[] = "hello &%€124 Hello / RAYU";
	ft_strupcase(s);
	printf("%s\n", s);
}
