#include <unistd.h>

void	ft_putchar(int num)
{
	num = num + '0';
	write(1, &num, 1);
}

void	ft_print_comb2(void)
{
	int	num_1;
	int	num_2;

	num_1 = 0;
	while (num_1 <= 98)
	{
		num_2 = num_1 + 1;
		while (num_2 <= 99)
		{
			ft_putchar(num_1 / 10);
			ft_putchar(num_1 % 10);
			write(1, " ", 1);
			ft_putchar(num_2 / 10);
			ft_putchar(num_2 % 10);
			if (!(num_1 == 98 && num_2 == 99))
				write(1, ", ", 2);
			num_2 ++;
		}
		num_1 ++;
	}
}
