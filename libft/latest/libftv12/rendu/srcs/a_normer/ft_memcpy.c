#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *dst2;
	char *src2;
	
	i = 0;
	src2 = (char *)src;
	dst2 = (char *)dst;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}
