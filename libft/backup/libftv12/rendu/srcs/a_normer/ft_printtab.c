//#include "../includes/libft.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_printtab(char **tab)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (tab && tab[i])
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(void)
{
	char **s;

	s = NULL;
	s[0] = "Ceci";
	s[1] = "est";
	s[2] = "un";
	s[3] = "test";
	s[4] = "rate";
	ft_printtab(s);
	return (0);
}
