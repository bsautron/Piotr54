char *ft_strlowcase(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
			if (str[i] <= 'Z' && str[i] >= 'A')
			{
				str[i] += 32;
				i++;
			}
	}
	return (str);
}
