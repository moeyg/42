void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	temp;

	while (0 < size)
	{
		index = 0;
		while (index + 1 < size)
		{
			if (tab[index] > tab[index + 1])
			{
				temp = tab[index];
				tab[index] = tab[index + 1];
				tab[index + 1] = temp;
			}
			index ++;
		}
		size --;
	}
}
