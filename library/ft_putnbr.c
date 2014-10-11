void ft_putchar(char c);

void ft_putnbr(int nb)
{
	int tmp;
	int cpt;

	cpt = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	tmp = nb;
	while ((tmp /= 10) > 0)
		cpt *= 10;
	tmp = nb;
	while (cpt)
	{
		ft_putchar((char)((tmp / cpt) + 48));
		tmp %= cpt;
		cpt /= 10;
	}
}
	
