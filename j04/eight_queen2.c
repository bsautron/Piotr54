#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str);
char *itoa(int **square);
int square(void);
int **fill(int **square);

int main(void)
{
	square;
	return (0);
}

int square(void)
{
	int square[8][8];
	int x;
	int y;
	x = 0;
	y = 0;
	while(x <= 8 && y <= 8)
	{
		square[x][y] = 0;
		y++;
		if (y == 8)
		{
			x++;
		}
	}
	return(0);
}
