int recursive_factorial(int nb)
{	
	if (nb > 0)
		return (nb * recursive_factorial(nb - 1));
	else
		return (1);
}
