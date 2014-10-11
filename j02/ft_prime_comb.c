#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	char nb_1;
	char nb_2;
	char nb_3;
	nb_1 = '0';
	nb_2 = '1';
	nb_3 = '2';
	while(nb_1 <= '7' && nb_2 <= '8' && nb_3 <= '9')
	{
		
		ft_putchar(nb_1);
		ft_putchar(nb_2);
		ft_putchar(nb_3);
		if (nb_1 != '7' || nb_2 != '8' || nb_3 != '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		nb_3++;
		if (nb_3 == '9' + 1)
		{
			nb_3 = nb_2 + 1;
			nb_2++;
		}
		if (nb_2 == '8' + 1)
		{
			nb_2 = nb_1 + 1;
			nb_1++;
		}
	}
}

int main(void)
{
	ft_print_comb();

	return (0);
}
