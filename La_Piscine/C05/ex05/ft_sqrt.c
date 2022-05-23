/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopark <dopark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:52:09 by dopark            #+#    #+#             */
/*   Updated: 2022/02/21 11:49:49 by dopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
