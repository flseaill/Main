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

#include "../rendu/includes/libft.h"
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
	wchar_t dst[50];
	wchar_t *src = (wchar_t *)malloc(sizeof(wchar_t) * 6);
	src[0] = 1451;
	src[1] = 5972;
	src[2] = 341;
	src[3] = 4845;
	src[4] = 5151;
	src[5] = 6;
	int	len = 6;
	wchar_t *dst1;
	wchar_t *dst2;
	dst1 = ft_memmove(dst, src, len);
	dst2 = memmove(dst, src, len);
	setbuf(stdout, NULL);
	printf("%s", "test");
	printf(".%S\n", dst1);
	printf(".%S\n", dst2);
}
