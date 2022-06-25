/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopark <dopark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:24:05 by dopark            #+#    #+#             */
/*   Updated: 2022/02/19 15:28:52 by dopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
		index ++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	index;

	ft_strupcase(str);
	index = 1;
	while (str[index] != '\0')
	{
		if ((str[index] >= 'A' && str[index] <= 'Z')
			&& ((str[index - 1] >= 'a' && str[index - 1] <= 'z')
				|| (str[index - 1] >= 'A' && str[index - 1] <= 'Z')
				|| (str[index - 1] >= '0' && str[index - 1] <= '9')))
		{
			str[index] = str[index] + 32;
		}
		index ++;
	}
	return (str);
}
