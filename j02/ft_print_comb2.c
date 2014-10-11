#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	int tmp;
	int size;

	size = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	tmp = nb;
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

void ft_print_comb2(void)
{
//	int nb[4];
//	int x;

//	x = 0;
	int nb[4] = {0, 0, 0, 1};
	while (nb[0] < 9 && nb[1] <= 9 && nb[2] <= 9 && nb[3] <= 9)
	{
		ft_putnbr(nb[0]);		
		ft_putnbr(nb[1]);
		ft_putchar(' ');		
		ft_putnbr(nb[2]);		
		ft_putnbr(nb[3]);
		ft_putchar(' ');
		nb[3]++;
		if (nb[3] == 10)
		{
			nb[3] = nb[1] + 2;
			nb[2]++;
		}
		if (nb[2] == 10)
		{
			nb[2] = 0;
			nb[1]++;
		}
		if (nb[1] == 10)
		{
			nb[1] = 0;
			nb[0]++;
		}
	}
}


int main(void)
{
	ft_print_comb2();
	return (0);
}
