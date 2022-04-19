/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopark <dopark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:54:44 by dopark            #+#    #+#             */
/*   Updated: 2022/02/17 14:23:25 by dopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] < 'a' || str[index] > 'z')
			&& (str[index] < 'A' || str[index] > 'Z'))
		{
			return (0);
		}
		index ++;
	}
	return (1);
}
