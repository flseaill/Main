/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 12:13:47 by flseaill          #+#    #+#             */
/*   Updated: 2017/03/12 17:25:51 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		j;
	int		last_c;

	i = 0;
	j = ft_strlen(s) + 1;
	last_c = 0;
	while (j != 0)
	{
		if (s[i] == c)
			last_c = i;
		i++;
		j--;
	}
	if (last_c == 0)
		return (NULL);
	return ((char *)&s[last_c]);
}
