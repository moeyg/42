/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopark <dopark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:53:06 by dopark            #+#    #+#             */
/*   Updated: 2022/02/17 10:44:03 by dopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index ++;
	}
	dest[index] = '\0';
	return (dest);
}
