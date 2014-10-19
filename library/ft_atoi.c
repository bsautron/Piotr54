int ft_atoi(char *str)
{
	int i;
	int nb;
	int neg;

	i = 0;
	nb  = 0;
	neg = 1;
	if (str[0] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		nb *= 10;
		nb += (str[i] - 48);
		i++;
	}
	nb *= neg;
	return (nb);
}
