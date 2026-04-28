#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] && s1[i] == s2[i])
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
	char *s1;
	char *s2;
	char *s3;
	int i;
	int j;

	s1 = "hello";
	s2 = "hello";
	s3 = "zu";
	i = ft_strcmp(s1, s2);
	j = ft_strcmp(s3, s1);
	printf("i: %d\nj: %d\n", i, j);

}
