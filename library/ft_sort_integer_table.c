void ft_sort_integer_table(int *tab, int size)
{
	int cpt;
	int tmp;

	cpt = 0;
	tmp = 0;
	while (cpt < size)
	{
		if (tab[cpt] > tab[cpt + 1])
		{
			tmp = tab[cpt];
			tab[cpt] = tab[cpt + 1];
			tab[cpt + 1] = tmp;
			cpt = 0;
		}
		else
			cpt += 1;
	}
}
