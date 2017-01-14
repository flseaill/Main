#include <unistd.h>

int		ft_putchar(char c){
	write(1, &c, 1);
}

int		ft_print_alphabet(char i){
	while (i <= 'z'){
		ft_putchar(i);
		i++;
	}
}
