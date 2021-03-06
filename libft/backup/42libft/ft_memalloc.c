/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 19:55:10 by flseaill          #+#    #+#             */
/*   Updated: 2017/03/30 18:38:39 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	int	*mem;

	i = 0;
	if (!(mem = (int *)malloc(sizeof(size_t) * size)))
		return (NULL);
	while (i != size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
