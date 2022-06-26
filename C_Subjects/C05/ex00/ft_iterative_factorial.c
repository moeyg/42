int	ft_iterative_factorial(int nb)
{
	int	integer;

	integer = nb;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	while (integer > 1)
	{
		nb = nb * (integer - 1);
		integer --;
	}
	return (nb);
}
