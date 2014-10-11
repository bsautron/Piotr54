#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, &*str, i);
}

int	main(void)
{
	char	*str;

	str = "Hello world !";
	ft_putstr(str);
	return (0);
}
