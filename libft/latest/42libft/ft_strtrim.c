/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 16:38:29 by flseaill          #+#    #+#             */
/*   Updated: 2017/03/30 17:34:10 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_trimlen(const char *s)
{
	size_t i;
	size_t j;
	size_t k;

	if (!s)
		return (0);
	i = 0;
	j = ft_strlen(s);
	while (ft_isspace(s[i]) == 1)
		i++;
	if (i == j)
		return (0);
	while (ft_isspace(s[j - 1]) == 1)
		j--;
	k = j - i;
	return (k);
}

char			*ft_strtrim(const char *s)
{
	char	*dst;
	int		i;
	int		j;
	size_t	len;

	len = ft_trimlen(s) + 1;
	if (len == 0)
		return ("");
	if (!s || (!(dst = malloc(sizeof(char) * len))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i])
	{
		dst[j] = s[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	j--;
	while (j >= 0 && (dst[j] == ' ' || dst[j] == '\n' || dst[j] == '\t'))
		dst[j--] = '\0';
	return (dst);
}
