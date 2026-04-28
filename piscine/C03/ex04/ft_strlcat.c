#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	d_len;
	int	i;

	d_len = 0;
	while(dest[d_len])
		d_len++;
	if(d_len > size)
		return (d_len);

}
