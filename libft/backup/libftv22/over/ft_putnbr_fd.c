

#include "../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nb;

	nb = (unsigned int)n;
	if (n < 0)
	{
		write(fd, "-", 1);
		nb = n * -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb += '0';
		write(fd, &nb, 1);
	}
}
