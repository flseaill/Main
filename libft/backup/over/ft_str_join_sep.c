/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 04:58:28 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/30 04:58:44 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

char	*ft_str_join_sep(const char *s1, const char *s2, char sep)
{
	char *concat;
	int i;
	int len;

	i = 0;
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	concat = (char *)(malloc(sizeof(char) * len + 2));
	if (!concat)
		return (NULL);
	while (s1 && s1[i])
	{
		concat[i] = s1[i];
		i++;
	}
	concat[i] = sep;
	i++;
	i = 0;
	while (s2 && s2[i])
	{
		concat[i + ft_strlen((char *)s1) + 1] = s2[i];
		i++;
	}
	concat[i + ft_strlen((char *)s1) + 1] = '\0';
	return (concat);
}

int		main(void)
{
	const char s1[] = "sep";
	const char s2[] = "are";
	char sep = ' ';

	printf("%s\n", ft_str_join_sep(s1, s2, sep));
}
