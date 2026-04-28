#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	
	if(n == 0)
		return (0);

	while(s1[i] && s1[i] == s2[i] && i < (n - 1))
	{
		if(s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char *s1 = "hellko";
	char *s2 = "hello";
	char *s3 = "aajh";
	int	i;
	int	j;

	i = ft_strncmp(s1, s2, 4);
	j = ft_strncmp(s3, s1, 3);
	printf("%d\n%d\n", i, j);
}
