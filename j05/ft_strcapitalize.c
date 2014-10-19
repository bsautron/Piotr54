char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (i == 0 || str[i - 1] == ' '))
		{
			str[i] -= 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
