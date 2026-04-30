#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	long long	n;

	n = nb;
	if(n < 0)
	{
		n = n * -1;
		write(1, "-", 1);
	}
	if(n <= 9)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	else if(n > 9)
	{
		ft_putnbr((int)(n / 10));
		ft_putnbr((int)(n % 10));
	}
}

int main(void)
{
	    ft_putnbr(-2147483648);
	        write(1, "\n", 1);
		    ft_putnbr(2147483647);
		        write(1, "\n", 1);
			    ft_putnbr(0);
			        return (0);
}


