int	ft_is_prime(int nb)
{
	int	integer;

	integer = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (integer <= (nb / integer))
	{
		if (nb % integer == 0)
			return (0);
		integer ++;
	}
	return (1);
}
