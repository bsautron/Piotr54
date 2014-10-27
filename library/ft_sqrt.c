int ft_sqrt(int nb)
{
	int nbr;

	nbr = 0;
	if (nb <= 0)
		return (0);
	else
	{
		while (nbr <= nb / 2 || nbr == nb)
		{
			if (nbr * nbr == nb)
				return (nbr);
			else
				nbr++;
		}
	}
	return (0);
}
