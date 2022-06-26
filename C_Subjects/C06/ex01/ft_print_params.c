#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		index ++;
	}
	return (index);
}

int	main(int argc, char *argv[])
{
	int	index;

	index = 1;
	while (index < argc)
	{
		write(1, argv[index], ft_strlen(argv[index]));
		write(1, "\n", 1);
		index ++;
	}
}
