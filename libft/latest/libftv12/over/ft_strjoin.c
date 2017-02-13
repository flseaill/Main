#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char *concat;
	size_t i;
	size_t j;
	size_t len;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen((char *)s2);
	concat = (char *)(malloc(sizeof(char) * len + 1));
	if (!concat)
		return (NULL);
	while (s1 && s1[i])
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
	{
		concat[i + j] = s2[j];
		j++;
	}
	concat[i + j + 1] = '\0';
	return *(&concat);
}

int		main(void)
{
	char s1[] = "abcdef";
	const char s2[] = "ghijkl";

	printf("%s\n", ft_strjoin(s1, s2));
}
