/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 19:32:53 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/13 20:12:00 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	tab = (int *)malloc((max - min) + 1);
	if (min > max)
	{
		tab = NULL;
		return (tab);
	}
	else
	{
		while (tab[i] != tab[max - min])
		{
			tab[i] = min + i;
			printf("%d", tab[i]);
			i++;
		}
		tab[i] = '\0';
	}
	return (tab);
}

int		main(void)
{
	int min;
	int max;

	min = 10;
	max = 20;
	printf("%s", "appel");
	ft_range(min, max);
	printf("%s", "sortie");
	return (1);
}
