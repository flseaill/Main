/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 22:55:02 by flseaill          #+#    #+#             */
/*   Updated: 2017/02/15 15:57:14 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	i = start;
	if (!s)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * len - start)))
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	if (i == len)
		str[i] = '\0';
	return (str);
}