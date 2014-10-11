#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putstr(int size, char *str)
{
	write(1, &*str, size);
}

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

int main()
{
	char dest[10];
	char *src;
	int i;

	i = 0;
	src = "Pierre";
	while (src[i] != '\0')
		i++;
	ft_putstr(i, ft_strcpy( dest, src));

	return (0);
}
