

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *tmp;

	if(!(tmp = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	ft_memcpy((char *)tmp, src, len);
	ft_memcpy(dst, (char *)tmp, len);
	return (dst);
}
