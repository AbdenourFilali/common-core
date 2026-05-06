#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	l;
	int	len;
	char	*strjoin;
	int	len_sep;

	if(size <= 0)
		return (NULL);
	i = 0;
	len = 0;
	while(i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len_sep = ft_strlen(sep);
	strjoin = (char *)malloc(sizeof(char) * (len + (len_sep * (size - 1)) + 1) );
	if (!strjoin)
		return(NULL);
	i = 0;
	k = 0;
	while(i < size)
	{
		l = 0;
		while(strs[i][l] != '\0')
		{
			strjoin[k] = strs[i][l];
			l++;
			k++;
		}
		j = 0;
		while(sep[j] && i < (size - 1))
		{
			strjoin[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}
	strjoin[k] = '\0';
	return (strjoin);
}


int     main(void)
{
	char    *strs[] = {"hello", "world", "42"};
	char    *result;

	// Cas normal avec separateur
	result = ft_strjoin(3, strs, ", ");
	printf("%s\n", result);
	free(result);

	//                                 // Cas avec separateur vide
	char    *strs2[] = {"abc", "def"};
	result = ft_strjoin(2, strs2, "");
	printf("%s\n", result);
	free(result);

	// Cas size <= 0
	result = ft_strjoin(0, strs, ", ");
	printf("%s\n", result == NULL ? "NULL" : result);
	return (0);
}
