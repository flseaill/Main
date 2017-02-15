/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 12:10:53 by flseaill          #+#    #+#             */
/*   Updated: 2017/02/15 12:10:56 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_intlen(int n)
{
	size_t	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}