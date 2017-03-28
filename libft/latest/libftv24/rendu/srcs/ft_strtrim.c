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

int		static ft_strlen_trim(const char *s)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	while (s[i] && ft_isspace(s[i]))
		i++;
	if (i == ft_strlen(s))
		return (0);
	while (s[a])
		a++;
	a--;
	while (s[a] && ft_isspace(s[a]))
		a--;
	return (a - i + 1);
}

char	*ft_strtrim(const char *s)
{
	char	*rst;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen_trim(s);
	if (len == 0 || *s == '\0')
		return ("");
	if (!(rst = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (ft_isspace(*s))
		s++;
	i = 0;
	while (i < len)
	{
		rst[i] = *s;
		i++;
		s++;
	}
	rst[i] = '\0';
	return (rst);
}
