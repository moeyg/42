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
