int ft_str_is_numeric(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
				i++;
		else if (str[i] == '\0')
			return (1);
		else
			return (0);
	}
	return (1);
}
