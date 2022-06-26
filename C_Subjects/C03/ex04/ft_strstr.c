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
