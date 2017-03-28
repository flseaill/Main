/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 21:36:50 by flseaill          #+#    #+#             */
/*   Updated: 2017/02/15 16:44:40 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_strclr(char *s)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	j = ft_strlen(s);
	while (i < j)
	{
		s[i] = '\0';
		i++;
	}
}

int		main(void)
{
	char s1[] = "Ceci est un test";

	ft_putstr(s1);
	ft_strclr(s1);
	ft_putstr("cleared");
	ft_putstr(s1);
	return (0);
}
