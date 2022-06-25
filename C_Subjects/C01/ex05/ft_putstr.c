#include <unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index ++;
	}
}
