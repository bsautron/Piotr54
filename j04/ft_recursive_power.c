#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (0);
	else if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int main(void)
{
	printf("%d", ft_recursive_power(5, 1));
	return (0);
}
