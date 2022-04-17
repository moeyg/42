/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopark <dopark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:11:31 by dopark            #+#    #+#             */
/*   Updated: 2022/02/17 11:11:34 by dopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index_begin;
	int	index_end;
	int	temp;

	index_begin = 0;
	index_end = size - 1;
	while (index_begin < (size / 2))
	{
		temp = tab[index_begin];
		tab[index_begin] = tab[index_end];
		tab[index_end] = temp;
		index_begin ++;
		index_end --;
	}
}
