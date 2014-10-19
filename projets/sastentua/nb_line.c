int nb_line(int size)
{
	if (size == 1)
		return (3);
	return ((size + 2) + nb_line(size - 1));
}
