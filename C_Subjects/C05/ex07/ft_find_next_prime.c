/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopark <dopark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:19:14 by dopark            #+#    #+#             */
/*   Updated: 2022/02/21 11:05:17 by dopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb ++;
	}
	return (nb);
}

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
