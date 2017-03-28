/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 22:37:54 by flseaill          #+#    #+#             */
/*   Updated: 2017/02/15 16:53:23 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_strequ(const char *s1, const char *s2)
{
	if (s1 && s2)
	{
		if (ft_strcmp(s1, s2))
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
	ft_putstr("Doit retourner 1");
	ft_putchar('\n');
	ft_putnbr(ft_strequ(s1, s2));
	ft_putchar('\n');
	ft_putstr("Doit retourner 0");
	ft_putchar('\n');
	ft_putnbr(ft_strequ(s1, s3));
	ft_putchar('\n');

}
