int ft_strcmp(char *s1, char *s2)
{
	int cpt;
	int result;

	cpt = 0;
	result = 0;
	while (s1[cpt] == s2[cpt] && s1[cpt] && s2[cpt])
	{
		cpt++;
	}
	result = (int)s1[cpt] - (int)s2[cpt];
	return (result);
}
