/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopark <dopark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:29:42 by dopark            #+#    #+#             */
/*   Updated: 2022/02/17 18:22:00 by dopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	dest_index;
	unsigned int	src_index;

	dest_index = 0;
	src_index = 0;
	while (dest[dest_index] != '\0')
	{
		dest_index ++;
	}
	while (src[src_index] != '\0')
	{
		dest[dest_index] = src[src_index];
		dest_index ++;
		src_index ++;
	}
	dest[dest_index] = '\0';
	return (dest);
}
