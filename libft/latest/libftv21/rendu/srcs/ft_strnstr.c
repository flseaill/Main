/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 16:09:28 by flseaill          #+#    #+#             */
/*   Updated: 2017/03/12 20:09:16 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!s2[i])
		return (&*(char *)s1);
	while (s1[i])
	{
		while (s1[i + j] == s2[j] && (ft_strlen(s2) - j - 1) < n)
		{
			if (!s2[j + 1])
				return ((char *)&s1[i]);
			j++;
			n--;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
