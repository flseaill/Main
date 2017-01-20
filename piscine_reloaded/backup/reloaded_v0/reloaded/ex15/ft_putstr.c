#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str){
	int i;

	i = 0;
	while (str)
	{
		ft_putchar(i);
		i++;
	}
}
