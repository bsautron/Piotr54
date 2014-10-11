#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


char** itoa(int** tab)
{
	int x;
	int y;
	char s_tab[8][8] = {0};
	x = 0;
	y = 0;
	while (x <= 8 && y <= 8)
	{
		s_tab[x][y] = (tab[x][y] + 48);
		y++;
		if (y == 9)
		{
			x++;
			y = 0;
		}
	}
	while (x <= 8)
	{
		s_tab[x][8] = '\n';
		x++;
	}
	return (s_tab);
}

void write_string(char** string)
{
	int x;
	int y;
	x = 0;
	y = 0;
	while (string[x][y] != '\n')
	{
		write(1, &string[x][y], 1);
		y++;
		if (string[x][y] == '\n' && x <= 8)
		{
			x++;
			y = 0;
		}
	}
}

int ft_eight_queen1(void)
{
	int square[8][8];
	int x;
	int y;

	x = 0;
	y = 0;
	while (x <= 8 && y <= 8)
	{
		square[x][y] = 0;
		y++;
		if (y == 9)
		{
			x++;
			y = 0;
		}
	}
	write_string(itoa(square));
	x = 0;
	y = 0;
}

int main(void)
{
	ft_eight_queen1;
	return (0);
}
