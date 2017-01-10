#include <unistd.h>

void	 ft_putchar(char c){
	write(1, &c, 1);
}

int		ft_strlen(char *str){
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
}

void	ft_putstr(char *str){
	int i;

	i = 0;
	while (str[i] < ft_strlen(*str))
	{
		ft_putchar(i);
		i++;
	}
}


int		main(int argc, char *argv[]){
	argc = argc + 1;
	while (argc > 1){
		ft_putstr(argv[argc]);
		argc--;
		ft_putchar('\n');
	}
	ft_putchar('\n');
	return (0);
}
