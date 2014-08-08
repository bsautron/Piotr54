#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	*str;
	int	cpt;

	str = "Hello World";
	cpt =  ft_strlen(str);
	printf("%d", cpt);
}
