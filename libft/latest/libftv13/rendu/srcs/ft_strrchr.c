#include "../includes/libft.h"

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
