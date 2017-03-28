

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *s1b;
	unsigned char *s2b;

	s1b = (unsigned char *)s1;
	s2b = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1b[i] == s2b[i])
		i++;
	if (i == n)
		i--;
	return (s1b[i] - s2b[i]);
}

