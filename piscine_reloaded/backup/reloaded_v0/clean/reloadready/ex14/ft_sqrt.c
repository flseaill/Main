/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 17:32:48 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/13 17:32:56 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		j = 1 / 2 * (j + nb / j);
		i++;
	}
	return (j);
}

int		main(void)
{
	printf("%d", ft_sqrt(12));
	return (1);
}
