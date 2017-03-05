

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int		ft_atoi(const char *str)
{
	int neg;
	int nb;

	neg = 1;
	nb = 1;
	if (!str)
		return (0);
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
	*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (nb == 1)
		{
			nb = *str - '0';
			str++;
		}
		nb = (nb * 10) + (*str - '0');
		str++;
	}
	return (neg * nb);
}

int		main(void)
{
	char str[] = " 	 \t \n+4987";
	printf("%s\n", str);
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return (0);
}
