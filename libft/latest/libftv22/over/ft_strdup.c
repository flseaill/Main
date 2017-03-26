/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 09:38:30 by flseaill          #+#    #+#             */
/*   Updated: 2017/02/15 16:25:29 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = (char *)(malloc(sizeof(char) * ft_strlen((char *)s1) + 1));
	if (!s1)
		return (NULL);
	if (!s2)
		return (NULL);
	while (s1 && s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int		main(void)
{
	const char s1[] = "Ceci est un test";

	ft_putstr(ft_strdup(s1));
	return (0);
}
