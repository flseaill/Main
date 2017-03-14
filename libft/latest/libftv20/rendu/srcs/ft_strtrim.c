/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 17:48:48 by flseaill          #+#    #+#             */
/*   Updated: 2017/03/14 20:03:41 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int		ft_is_blank(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

char	*ft_strtrim(char const *s)
{
	size_t i;
	size_t j;
	size_t k;
	size_t len;
	char *cpy;

	i = 0;
	j = 0;
	k = 0;
	len = ft_strlen(s);
	printf("%s", "Premiere boucle = ");
	while (ft_is_blank(s[i]) == 1)
	{
		i++;
		len--;
	}
	printf("%zu\n", i);
	printf("%s", "Deuxieme boucle = ");
	while (ft_is_blank(s[j]) == 1)
	{
		j--;
		len--;
	}
	printf("%zu\n", j);
	if (!(cpy = (char *)malloc(sizeof(char) * (ft_strlen(s) - len + 1))))
		return (NULL);
	while (s[i] != s[j])
	{
		cpy[k] = s[j];
		printf("%c\n", cpy[k]);
		j++;
		k++;
	}
	cpy[k] = '\0';
	//printf("%s", ft_strdup(cpy));
	return (ft_strdup(cpy));
}

int		main(void)
{
	const char s[] = "	 \n\ntest	test\ntest\n\n\n";
	ft_strtrim(s);
	//printf("\n%s", ft_strtrim(s));
}
