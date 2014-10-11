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

int main(void)
{
	ft_is_negative(0);
	ft_is_negative(-5);
	ft_is_negative(10);
	ft_is_negative(-10);
	ft_is_negative(10);

	return (0);
}
