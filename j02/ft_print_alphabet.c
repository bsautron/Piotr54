#include <stdlib.h>

int	main(int argc, char **argv)
{
	char	letter;

	letter = 123;
	while (letter > 97)
{	
	write(1, &letter, 1);
	letter--;
}
return (0);
}
