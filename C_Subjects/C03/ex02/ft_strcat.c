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
