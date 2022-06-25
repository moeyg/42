#include <unistd.h>
void	ft_print_comb(void)
{
	char	hundreds;
	char	tens;
	char	unit;

	hundreds = '0';
	while (hundreds <= '7')
	{
		tens = hundreds + 1;
		while (tens <= '8')
		{
			unit = tens + 1;
			while (unit <= '9')
			{
				write(1, &hundreds, 1);
				write(1, &tens, 1);
				write(1, &unit, 1);
				if (hundreds != '7')
					write(1, ", ", 2);
				unit ++;
			}
			tens ++;
		}
		hundreds ++;
	}
}
