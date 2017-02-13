/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 22:55:02 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/21 22:59:59 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	char *str;

	i = start;
	if (!str)
		return (NULL);
	str = (char *)(malloc(sizeof(char) * len - start));
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}
