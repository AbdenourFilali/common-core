#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	len;
	char	*str;
	int	i;

	i = 0;
	len = ft_strlen(src);
	str = malloc((sizeof(char)) * (len + 1));
	if(str == NULL)
		return(NULL);
	while(src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
