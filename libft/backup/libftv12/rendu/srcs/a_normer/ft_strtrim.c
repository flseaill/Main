/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 23:07:21 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/21 23:28:33 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strtrim(char const *s)
{
	char *str;
	int i;
	int j;

	i = 0;
	j = 0;
	str = (char *)(malloc(sizeof(char) * strlen(s) + 1));
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		else
		{
			str[j] = s[i];
			j++;
			i++;
		}
	}
	if (j == 0)
		strcpy(str, s);
	else
		str[j] = '\0';
	return (str);
}

int main(void)
{
	char s[] = "abc\ndef\tghi jkl";
	printf("%s", ft_strtrim(s));
	return (0);
}
