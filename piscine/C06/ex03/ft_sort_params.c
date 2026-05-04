#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char *tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	if(argc > 1)
	{
		while(j < argc - 1)
		{
			i = 1;
			while(argc - 1 > i)
			{
				if(ft_strcmp(argv[i], argv[i + 1]) > 0)
					ft_swap(&argv[i], &argv[i + 1]);
				i++;
			}
			j++;
		}
		j = 1;
		while(argc > j)
		{
			ft_putstr(argv[j]);
			j++;
			write(1, "\n", 1);
		}
		
	}
}
