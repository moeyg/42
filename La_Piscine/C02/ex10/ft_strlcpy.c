/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopark <dopark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:46:48 by dopark            #+#    #+#             */
/*   Updated: 2022/02/19 20:33:53 by dopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (src[index] != '\0' && index + 1 < size)
	{
		dest[index] = src[index];
		index ++;
	}
	dest[index] = '\0';
	index = 0;
	while (src[index] != '\0')
	{
		index ++;
	}
	return (index);
}
