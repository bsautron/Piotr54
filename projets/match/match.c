#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	ft_putchar((char)nb + 48);
}

int match(char *s1, char *s2)
{
	int sg[2];

	sg[0] = 0;
	sg[1] = 0;
	if (s2[0] != s1[0])
		return (0);
	else
	{
		while (s1[sg[0]] != '\0')
		{		
			if (s2[sg[1] + 1] == s1[sg[0] + 1] || s2[sg[1] + 1] == '*')
			{
				sg[1]++;
				sg[0]++;
			}
			else if (s2[sg[1]] == '*')
				sg[0]++;
			else if (s2[sg[1] + 1] != s1[sg[0] + 1] && s2[sg[1]] == '*')
				sg[1]--;
			else if (s1[sg[0]] == '\0' && s2[sg[1]] == '\0')
				return (1);
			else
				return (0);
		}
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		{
			ft_putnbr(match(argv[1], argv[2]));
		}
	else
		{
			ft_putchar(0);
			return(0);
		}
	return (0);
}
