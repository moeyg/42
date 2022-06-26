#include <unistd.h>

void	ft_swap(char **str1, char **str2);
char	ft_strcmp(char *str1, char *str2);
int		ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			++ j;
		}
		++ i;
	}
	i = 1;
	while (i < argc)
	{
		write (1, argv[i], ft_strlen(argv[i]));
		write (1, "\n", 1);
		++ i;
	}
}

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

char	ft_strcmp(char *str1, char *str2)
{
	while (*str1 || *str2)
	{
		if (*str1 != *str2)
			return ((unsigned char)*str1 - (unsigned char)*str2);
		++ str1;
		++ str2;
	}
	return (0);
}

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
