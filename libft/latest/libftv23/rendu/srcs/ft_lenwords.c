/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lenwords.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 16:03:34 by flseaill          #+#    #+#             */
/*   Updated: 2017/02/15 16:04:41 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int		ft_lenwords(const char *str, char c, int word)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (word != 0)
	{
		j = 0;
		if (str[i] == c)
		{
			while (str[i] == c)
				i++;
		}
		if (str[i] != c)
		{
			while (str[i] != c)
			{
				i++;
				j++;
			}
		}
		word--;
	}
	ft_putnbr(j);
	return (j);
}

/*int		main(void)
{
	const char str[] = "a b c d e f g h i j k l m n o p q r s t u v w x y z";
	char c = ' ';
	int word = 26;
	ft_lenwords(str, c, word);
}*/
