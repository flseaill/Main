/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 19:32:53 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/19 17:52:04 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	tab = (int *)malloc((max - min));
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	else
	{
		while (i != max - min)
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

	min = -2999;
	max = 0;
	ft_range(min, max);
	return (0);
}
