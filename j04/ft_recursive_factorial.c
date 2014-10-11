#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int recursive_factorial(int nb)
{	
	if (nb > 0)
		return (nb * recursive_factorial(nb - 1));
	else
		return (1);
}

int main(void)
{
	printf("%d", recursive_factorial(5));
}
