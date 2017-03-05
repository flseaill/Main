#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + ft_strlen((char *)src));
	while ((dst_len + i) < size - 1 && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + ft_strlen((char *)src));
}

int		main(void)
{
	char dst[] = "abcdef";
	char src[] = "ghijkl";
	size_t size = 7;
	printf("%lu\n", ft_strlcat(dst, src, size));
	printf("%lu\n", strlcat(dst, src, size));
	return (0);
}
