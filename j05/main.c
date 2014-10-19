#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, int size);
char *ft_strupcase(char *s1);
char *ft_strlowcase(char *str);
char *ft_strcapitalize(char *str);
int ft_str_is_alpha(char *str);
int ft_str_is_numeric(char *str);

int main(int argc, char **argv)
{
//char *tp;
//char tab[100];
//int i;
//i = 0;
//tp = "pierreestleplusgrosSalop 42ieme !";
//while (tp[i])
//{
//	tab[i] = tp[i];
//	i++;
//}
//printf("%s", ft_strcapitalize(tab));i
if (argc == 2 || argc == 1)
	printf("%d", ft_str_is_numeric(argv[1]));
return (0);
}
