
#include "../includes/libft.h"

int		ft_countwords(char const *s, char c)
{
	size_t	i;
	size_t nb;

	i = 0;
	nb = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			nb++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		if (s[i] != '\0')
			i++;
	}
	return (nb);
}
