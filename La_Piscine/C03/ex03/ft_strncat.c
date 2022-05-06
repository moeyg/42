/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopark <dopark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:37:31 by dopark            #+#    #+#             */
/*   Updated: 2022/02/19 19:59:07 by dopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_index;
	unsigned int	src_index;

	dest_index = 0;
	src_index = 0;
	while (dest[dest_index] != '\0')
	{
		dest_index ++;
	}
	while (src_index < nb && src[src_index] != '\0')
	{
		dest[dest_index] = src[src_index];
		dest_index ++;
		src_index ++;
	}
	dest[dest_index] = '\0';
	return (dest);
}
