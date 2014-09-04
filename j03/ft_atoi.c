#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

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

int	main(void)
{
	char	*str;
	int	result;
	
	result = 0;
	str = "-185";
	printf("%d", ft_atoi(str));
	return (0);
}
