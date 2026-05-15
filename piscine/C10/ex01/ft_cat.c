#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	fd;
	int	bytes_read;
	char	buffer[30];

	i = 0;
	if (argc == 1)
	{
		while((bytes_read = read(0, buffer, 30)) > 0)
				write(1, buffer, bytes_read);
	}
	else if (argc > 1)
	{
		while(i < argc - 1)
		{
			fd = open(argv[i + 1], O_RDONLY);
			if(fd == -1)
			{
				ft_putstr("cat: ");
				ft_putstr(argv[i + 1]);
				ft_putstr(": No such file or directory\n");
				i++;
				continue;
			}
			while(fd != -1 && (bytes_read = read(fd, buffer, 30)) > 0)
				write(1, buffer, bytes_read);
			close(fd);
			i++;
		}
	}
	return (0);
}
