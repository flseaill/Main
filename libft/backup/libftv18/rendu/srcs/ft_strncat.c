/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 15:10:52 by flseaill          #+#    #+#             */
/*   Updated: 2017/02/15 15:33:49 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	i;
	int		len;

	i = 0;
	if (!dst)
		return ((char *)src);
	len = ft_strlen(dst);
	while (src && src[i] && n > 0)
	{
		dst[len + i] = src[i];
		i++;
		n--;
	}
	dst[len + i] = '\0';
	return (dst);
}
