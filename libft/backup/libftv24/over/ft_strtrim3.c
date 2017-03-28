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

char	*ft_strtrim(const char *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*ret;

	if (!s)
		return (NULL);
	j = ft_strlen(s);
	while (j != 0 && (s[--j] == ' ' || s[j] == '\n' || s[j] == '\t'))
		i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && i <= j)
		i++;
	if (!(ret = (char *)malloc(sizeof(char) * (j - i + 1))))
		return (NULL);
	k = 0;
	while (i <= j)
		ret[k++] = s[i++];
	ret[k] = '\0';
	return (ret);
}
