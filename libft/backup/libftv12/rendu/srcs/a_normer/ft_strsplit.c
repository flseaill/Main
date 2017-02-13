#include "../includes/libft.h"
#include <stdio.h>
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	size_t i;
	size_t j;
	char **tab;

	if (!s || !c)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while ((int)j < ft_countwords(s, c))
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			tab[j] = ft_strsub(&s[i], 0, ft_lenwords(s, c, (j + 1)));
			i+= (ft_lenwords(s, c, (j + 1)) + 1);
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

int		main(void)
{
	char const s[] = "Ceci est un test c abc";
	char c = 'c';
	printf("%s\n", ft_strsplit(s, c));
}
