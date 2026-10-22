#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char c;

	c = '2';
	//I could also simply send a literal char instead of declaring a variable.
	
	ft_putchar(c);
	write(1, "\n", 1);
	return (0);
}