#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	l;

	l = 0;
	i = 0;

	while(src[i])
		i++;

	if (size > 0)
	{
		while(src[l] && size - 1 > l)
		{
			dest[l] = src[l];
			l++;
		}	
		dest[l] = '\0';
	}
	return (i);
}

int	main(void)
{
	char s[] = "hello";
	unsigned int size;
	char d[100];

	size = 4;
	
	size = ft_strlcpy(d, s, size);
	printf("s: %s\nd: %s\nsize: %d\n", s, d, size);
}
