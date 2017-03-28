/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 12:38:01 by flseaill          #+#    #+#             */
/*   Updated: 2017/03/24 18:02:04 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>
#include <string.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
//	char *tmp;
	size_t i;
	
//	tmp = (char *)src;
	i = 0;
	if (src < dst)
	{
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		while (len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
			len--;
		}
	}
	return (dst);
}
/*
	if (!(tmp = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	ft_memcpy((char *)tmp, src, len);
	ft_memcpy(dst, (char *)tmp, len);
	return (dst);
}*/

int		main(void)
{
	int *dst[50];
	int *src = (int *)malloc(sizeof(int) * 6);
	src[0] = 1;
	src[1] = 2;
	src[2] = 3;
	src[3] = 4;
	src[4] = 5;
	src[5] = 6;
	int	len = 6;
	int *dst1;
	int *dst2;
	dst1 = ft_memmove(dst, src, len);
	dst2 = memmove(dst, src, len);
	int i;

	i = 0;
	while (i < len)
	{
		printf("%d ", dst1[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < len)
	{
		printf("%d ", dst2[i]);
		i++;
	}
}
