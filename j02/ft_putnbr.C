#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	int size;
	int tmp;

	tmp = nb;
	size = 1;
	while ((tmp /= 10) > 0)
		size *= 10;

	tmp = nb;
	while (size)
	{
		ft_putchar((char)((tmp / size) + 48));
		tmp %= size;
		size /= 10;
	}
}
