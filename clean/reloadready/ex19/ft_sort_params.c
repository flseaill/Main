/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 17:49:28 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/13 18:49:05 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_swap(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_params(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (ft_strcmp(tab[i], tab[i + 1]) < 0)
		{
			ft_swap(tab[i], tab[i + 1]);
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	ft_sort_params(argv);
	while (argv[i])
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		argc++;
		i++;
	}
	return (0);
}
