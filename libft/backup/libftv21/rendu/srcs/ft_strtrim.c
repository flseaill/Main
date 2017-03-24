/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 17:48:48 by flseaill          #+#    #+#             */
/*   Updated: 2017/03/24 17:22:25 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	char	*cpy;

	i = 0;
	if (!s)
		return (NULL);
	cpy = ft_strdup(s);
	cpy = ft_strrev((char *)s);
	while (ft_isspace(cpy[i]))
		i++;
	cpy = ft_strdup(&cpy[i]);
	cpy = ft_strrev(cpy);
	i = 0;
	while (ft_isspace(cpy[i]))
		i++;
	cpy = ft_strdup(&cpy[i]);
	return (cpy);
}
