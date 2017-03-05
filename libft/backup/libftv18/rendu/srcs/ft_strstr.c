/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 13:39:46 by flseaill          #+#    #+#             */
/*   Updated: 2017/02/15 16:13:26 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*s1b;
	char	*s2b;

	i = 0;
	j = 0;
	s1b = (char *)s1;
	s2b = (char *)s2;
	if (!s2)
		return (s1b);
	while (s1b && s1b[i])
	{
		while (s1b[i + j] == s2b[j])
		{
			if (!s2b[j + 1])
				return (&s1b[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
