int	ft_sqrt(int nb)
{
	long long	number;

	if (nb <= 0)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	number = 0;
	while (number <= nb && number <= 46341)
	{
		if (number * number == nb)
		{
			return (number);
		}
		number ++;
	}
	return (0);
}
