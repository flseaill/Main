/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 02:15:52 by flseaill          #+#    #+#             */
/*   Updated: 2017/02/15 17:19:44 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <string.h>


char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (src[i] && len > 0)
	{
		dst[i] = src[i];
		len--;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int		main(void)
{
	const char src[] = "Ceci est un test";
	const char src2[] = "Ceci est un test";
	char dst[] = "abcdefghijklmnopqrstuvwxyz";
	char dst2[] = "abcdefghijklmnopqrstuvwxyz";
	int n = 20;

	ft_putstr(src);
	write(1, "\n", 1);
	ft_putstr(dst);
	write(1, "\n", 1);
	ft_putstr("ft_strncpy");
	write(1, "\n", 1);
	ft_strncpy(dst, src, n);
	ft_putstr(src);
	write(1, "\n", 1);
	ft_putstr(dst);
	write(1, "\n", 1);
	ft_putstr(src2);
	write(1, "\n", 1);
	ft_putstr(dst2);
	write(1, "\n", 1);
	ft_putstr("strncpy");
	write(1, "\n", 1);
	strncpy(dst2, src2, n);
	ft_putstr(src2);
	write(1, "\n", 1);
	ft_putstr(dst2);
	write(1, "\n", 1);
	return (0);
}
