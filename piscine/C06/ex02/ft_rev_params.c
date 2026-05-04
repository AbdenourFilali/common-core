#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	if(argc > 1)
	{
		while(argc > 1)
		{
			ft_putstr(argv[argc - 1]);
			argc--;
			write(1, "\n", 1);
		}
	}
}
