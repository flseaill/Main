/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 12:38:01 by flseaill          #+#    #+#             */
/*   Updated: 2017/03/24 18:04:07 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
<<<<<<< HEAD:libft/latest/libftv21/rendu/srcs/ft_memmove.c
	
=======

>>>>>>> 4648110d2c4f8c0536dafc10fbe98c248b73818c:libft/backup/libftv22/rendu/srcs/ft_memmove.c
	i = 0;
	if (src > dst)
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	}
	return (dst);
}
