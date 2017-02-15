/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 15:34:17 by flseaill          #+#    #+#             */
/*   Updated: 2017/02/15 16:00:00 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>
#include <stdlib.h>

int		ft_lenwords(const char *str, char c, int word)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (word != 0)
	{
		j = 0;
		if (str[i] == c)
		{
			while (str[i] == c)
				i++;
		}
		if (str[i] != c)
		{
			while (str[i] != c)
			{
				i++;
				j++;
			}
		}
		word--;
	}
	return (j);
}

char	**ft_strsplit(const char *s, char c)
{
	size_t	i;
	size_t	j;
	char	**tab;

	if (!s || !c)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while ((int)j < ft_countwords(s, c))
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			tab[j] = ft_strsub(&s[i], 0, ft_lenwords(s, c, (j + 1)));
			i += (ft_lenwords(s, c, (j + 1)) + 1);
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

int		main(void)
{
	char const s[] = "Ceci est un test c abcdef";
	char c = 'c';
	ft_printtab(ft_strsplit(s, c));
}
