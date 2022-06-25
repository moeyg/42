/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopark <dopark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:17:07 by dopark            #+#    #+#             */
/*   Updated: 2022/02/21 11:04:59 by dopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	integer;

	integer = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (integer <= (nb / integer))
	{
		if (nb % integer == 0)
			return (0);
		integer ++;
	}
	return (1);
}
