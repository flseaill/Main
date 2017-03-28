#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while (s && s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	int last_c;

	i = 0;
	last_c = 0;
	while (s && s[i])
	{
		if (s[i] == c)
			last_c = i;
		i++;
	}
	if (last_c == 0)
		return (NULL);
	return ((char *)&s[last_c]);
}

int		main(void)
{
	const char s[] = "abcdefghiabcdefabc";
	int c = 'a';
	printf("%s\n", ft_strchr(s, c));
	printf("%s\n", "ft_strchr(s, c)");
	printf("%s\n", strchr(s, c));
	printf("%s\n", "strchr(s, c)");
	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", "ft_strrchr(s, c)");
	printf("%s\n", strrchr(s, c));
	printf("%s\n", "strrchr(s, c)");
	return (0);
}
