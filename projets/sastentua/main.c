#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int nb_line(int size);

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	else
		printf("%d\n", nb_line(atoi(argv[1])));
	return 0;
}
