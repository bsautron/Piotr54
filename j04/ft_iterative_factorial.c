#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int 	ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	while (nb != 0)
		{
			result *= nb;
			nb --;
		}
	return (result);
}

int	main(void)
{
	printf("%d", ft_iterative_factorial(15));
	return (0);
}
