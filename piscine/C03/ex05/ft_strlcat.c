#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	d_len;
	int	s_len;
	int	i;

	d_len = 0;
	s_len = 0;
	i = 0;
	while(dest[d_len])
		d_len++;
	while(src[s_len])
		s_len++;
	if(d_len >= size)
		return (size + s_len);
	while(src[i] && i < (size - 1))
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return(d_len + i);
}
