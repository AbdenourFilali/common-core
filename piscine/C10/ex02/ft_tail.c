#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	int	fd;

	if(argc >= 4)
	{
		fd = open(argv[3], O_RDONLY);
		if(fd < 0)
		{
			ft_putstr("tail: cannot open '");
			ft_putstr(argv[3]);
			ft_putstr("' for reading: No such file or directory\n");
			return (1);
		}


	}
}
