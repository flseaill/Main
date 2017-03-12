
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char *dst2;
	unsigned char *src2;

	i = 0;
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	while (i < n)
	{
		ft_memcpy(&dst[i], &src[i], 1);
		if (src2[i] == (unsigned char)c)
			return (&dst2[i + 1]);
		i++;
	}
	return (NULL);
}
