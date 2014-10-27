int	ft_atoi(char *str)
{
	int	neg;
	int	nbr;
	int	i;

	i = 0;
	nbr = 0;
	neg = 1;
	if (str[i] == '-')
		{
			i++;
			neg = -1;
		}
	while (str[i] >= '0' && str[i] <= '9' && str[i] )
		{
			nbr *= 10;
			nbr += (str[i] - 48);
			i++;
		}
	nbr =  nbr * neg;
	return (nbr);
}
