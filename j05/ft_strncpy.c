#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putstr(int size, char *str)
{
	write(1, &*str, size);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
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
	ft_putstr(4, ft_strncpy( dest, src, 4));

	return (0);
}
