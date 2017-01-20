/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 19:32:53 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/14 14:42:25 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	tab = (int *)malloc((max - min) + 1);
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
			i++;
		}
		tab[i] = '\0';
	}
	return (tab);
}
