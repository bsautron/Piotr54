#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
	
int	main(void)
{
	int a = 5;
	int b = 8;
		
	ft_swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}

