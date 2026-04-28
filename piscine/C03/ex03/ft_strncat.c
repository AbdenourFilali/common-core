#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int	i;
	unsigned int j;
	i = 0;
	j = 0;
	if (n == 0)
		return (dest);
	while(dest[i])
		i++;
	while(src[j] && j < n)
	{
		dest[i] = src[j];
		i ++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
