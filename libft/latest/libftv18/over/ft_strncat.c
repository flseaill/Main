#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str && str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dst, char *src, size_t n)
{
	size_t i;
	int len;

	i = 0;
	if (!dst)
		return (src);
	len = ft_strlen(dst);
	while (src && src[i] && n > 0)
	{
		dst[len + i] = src[i];
		i++;
		n--;
	}
	dst[len + i] = '\0';
	return (dst);
}

int		main(void)
{
	char s1[] = "Je m'appel";
	char s2[] = "le Florian";
	size_t n = 3;
	printf("%s\n", ft_strncat(s1, s2, n));
	printf("%s\n", strncat(s1, s2, n));
}
