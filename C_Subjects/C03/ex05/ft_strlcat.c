unsigned int	ft_strlen(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index])
	{
		index ++;
	}
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	index;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= size)
	{
		return (src_len + size);
	}
	else
	{
		index = 0;
		while (src[index] && dest_len + 1 + index < size)
		{
			dest[dest_len + index] = src[index];
			index ++;
		}
		dest[dest_len + index] = '\0';
		return (dest_len + src_len);
	}
}
