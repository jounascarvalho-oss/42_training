#include <unistd.h>

void	ft_print_numbers(void)
{
	//could use char, but let's practice conversion to char - write() only uses chars ''
	int	n;
	char	c;

	n = 0;
	while (n < 10)
	{
		c = n + '0';
		write(1, &c, 1);
		n++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}