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
	while (--argc)
	{
		write(1, argv[argc], ft_strlen(argv[argc]));
		write(1, "\n", 1);
	}
}
