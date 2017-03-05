/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 16:09:28 by flseaill          #+#    #+#             */
/*   Updated: 2017/02/15 16:13:07 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;
	char	*s1b;
	char	*s2b;

	s1b = (char *)s1;
	s2b = (char *)s2;
	i = 0;
	j = 0;
	if (!s2)
		return (s1b);
	while (s1b && s1b[i])
	{
		while (s1b[i + j] == s2b[j] && (ft_strlen(s2) - j - 1) < n)
		{
			if (!s2b[j + 1])
				return (&s1b[i]);
			j++;
		}
		j = 0;
		i++;
		n--;
	}
	return (NULL);
}
