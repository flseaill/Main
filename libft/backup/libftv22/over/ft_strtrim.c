/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 17:48:48 by flseaill          #+#    #+#             */
/*   Updated: 2017/03/05 17:48:59 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	static *ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	char	*cpy;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	str = ft_strcpy(str, s);
	cpy = (char *)malloc(sizeof(char) * ft_strlen(s));
	while (str[i] && cpy)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		else
		{
			cpy[j] = str[i];
			j++;
		}
		i++;
	}
	cpy[i] = '\0';
	return (ft_strdup(cpy));
}
