/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 22:40:57 by flseaill          #+#    #+#             */
/*   Updated: 2017/02/15 17:25:24 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (s1 && s2)
	{
		if (ft_strncmp(s1, s2, n))
			return (0);
		else
			return (1);
	}
	return (0);
}

int		main(void)
{
	const char s1[] = "abcdef";
	const char s2[] = "abcdef";
	const char s3[] = "abcdefi";
	int	n = 7;
	ft_putstr("Doit retourner 1");
	ft_putchar('\n');
	ft_putnbr(ft_strnequ(s1, s2, n));
	ft_putchar('\n');
	ft_putstr("Doit retourner 0");
	ft_putchar('\n');
	ft_putnbr(ft_strnequ(s1, s3, n));
	ft_putchar('\n');
}
