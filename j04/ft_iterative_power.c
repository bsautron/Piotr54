#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int result;

	result = nb;
	if (power == 0)
		result = 0;
	if (power == 1)
		result = nb;
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int main(void)
{
	printf("%d", ft_iterative_power(12, 5));
	return (0);
}
