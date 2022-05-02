/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopark <dopark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:56:53 by dopark            #+#    #+#             */
/*   Updated: 2022/02/19 20:25:09 by dopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	character;

	while (*str)
	{
		if ((*str > 31) && (*str < 127))
		{
			ft_putchar(*str);
		}
		else
		{
			character = *str;
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[character / 16]);
			ft_putchar("0123456789abcdef"[character % 16]);
		}
		str ++;
	}
}
