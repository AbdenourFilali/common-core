#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	char	*zero_arg = "File name missing.\n";
	char	*too_many_arg = "Too many arguments.\n";
	char	*cant_read = "Cannot read file.\n";
	int	fd;
	char	buffer[1024];
	int	bytes_read;

	if (argc == 1)
		ft_putstr(zero_arg);
	if(argc > 2)
		ft_putstr(too_many_arg);
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr(cant_read);
			return (1);
		}
		while((bytes_read = read(fd, buffer, 1024)) > 0)
		{
			write(1, buffer, bytes_read);
		}
		close(fd);
		return (0);
	}

}
