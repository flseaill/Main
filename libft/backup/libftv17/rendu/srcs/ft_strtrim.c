#include "../includes/libft.h"
#include <stdio.h>
char 	*ft_strtrim(char const *s)
{
	size_t i;
	size_t j;
	char *cpy;
	char *str;

	i = 0;
	j = 0;
	str = NULL;
	str = ft_strcpy(str, s);
	printf("test\n");
	if (!s)
		return (NULL);
	while (str[i] != '\0')
	{	
		if (str[i] != ' ' || str[i] != '\t' || str[i] != '\n')
			j++;
		i++;
	}
	cpy = (char *)malloc(sizeof(char) * (j + 1));
	if (!cpy)
		return (NULL);
	i = 0;
	j = 0;
	while (cpy || cpy[i])
	{
		if (str[j] != ' ' || str[j] != '\t' || str[j] != '\n')
		{
			cpy[i] = str[j];
			i++;
		}
		j++;
	}
	return (cpy);
}

int		main(void)
{
	const char test[] = " ab cd		ef\n ghij klm";
	ft_strtrim(test);
}
