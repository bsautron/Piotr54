#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char	tmp;

	i = 0;
	j = 0;
	tmp = '\0';
	while (str != '\0')
		i++;
	while (j < i)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		j++;
		i--;
	}
	return (str);
}

int	main(void)
{
	char	*str;
	int	i;

	i = 1;
	str = "abfkbsuv";
	str = ft_strrev(str);
	while (str[i])
		write(1, &str[i++], 1);
	return (0);
}
