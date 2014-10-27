char	*ft_strrev(char *str)
{
	int i;
	int j;
	char tmp;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	i -= 1;
	while (j < i)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		i--;
		j++;
	}
	return (str);
}
