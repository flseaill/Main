

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

char	ft_strncmp(char *s1, char *s2, size_t n)
{
	int i;
	
	i = 0;
	if (!s1)
		return (0);
	while (s1[i] == s2[i] && n > 0)
	{
		n--;
		i++;
	}
	return (((unsigned char)s1[i] - (unsigned char)s2[i]));
}

char	*ft_strstr(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!s2)
		return (s1);
	while (s1 && s1[i])
	{
		while (s1[i + j] == s2[j])
		{
			if (!s2[j + 1])
				return (&s1[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}

int		main(void)
{
	char s1[] = "Je m'appelle florian seailles";
	char s2[] = "florian";
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%d\n", ft_strncmp(s1, s2, ft_strlen(s1)));
	printf("%d\n", strncmp(s1, s2, ft_strlen(s1)));
	printf("%s\n", ft_strstr(s1, s2));
	printf("%s\n", strstr(s1, s2));
	return (0);
}
