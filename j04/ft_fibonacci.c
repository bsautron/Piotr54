#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main(void)
{
	printf("%d", ft_fibonacci(15));
	return (0);
}
