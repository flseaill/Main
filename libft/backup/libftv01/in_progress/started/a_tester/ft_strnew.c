/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 21:05:17 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/21 21:11:08 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

char	*ft_strnew(size_t size)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = NULL;
	str = (char *)(malloc(sizeof(char) * size + 1));
	if (!str)
		return (NULL);
	while (i != size)
	{
		str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		main(void)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_strnew(5);
	while (i != 5)
	{
		str[i] = i;
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	ft_putstr(str);
}
