/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 02:15:52 by flseaill          #+#    #+#             */
/*   Updated: 2017/02/15 17:20:08 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (src && dst && len > 0)
	{
		if (src[i] != '\0')
			dst[i] = src[i];
		else
			dst[i] = '\0';
		i++;
		len--;
	}
	return (dst);
}