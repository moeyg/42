int	ft_iterative_power(int nb, int power)
{
	int	exponent;
	int	base;

	exponent = 1;
	base = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (exponent < power)
	{
		nb = nb * base;
		exponent ++;
	}
	return (nb);
}
