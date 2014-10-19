int ft_strncmp(char *s1, char *s2, int size)
{
	int cpt;

	cpt = 0;
	while (s1[cpt] == s2[cpt] && cpt < size && s1[cpt] && s2[cpt])
		cpt++;
	return ((int)s1[cpt] - (int)s2[cpt]);
}
