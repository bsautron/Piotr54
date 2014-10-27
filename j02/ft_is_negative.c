#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_is_negative(int n)
{
	char c;

	c = 'P';
	if (n < 0)
	{
		c = 'N';
	}
	ft_putchar(c);
}
