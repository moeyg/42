/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopark <dopark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:01:01 by dopark            #+#    #+#             */
/*   Updated: 2022/02/20 12:57:53 by dopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	index;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		if (*str == *to_find)
		{
			index = 0;
			while (to_find[index] && str[index] == to_find[index])
				index ++;
			if (to_find[index] == '\0')
				return (str);
		}
		str ++;
	}
	return (0);
}
