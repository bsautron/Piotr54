#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strrev(char *str)
{

    int i;
    int j;
    char c;

	i = 0;
	j = ft_strlen(str) - 1;
	if(str[i])
	{
		while( i < j)
		{		
			c = str[i];
			str[i] = str[j];
			str[j] = c;
			i++;
			j--;
        	}
    	}
    ft_putstr(str);

    return(str);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	else
		ft_strrev(argv[1]);
	return(0);
}
