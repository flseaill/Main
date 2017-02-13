/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 16:56:39 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/25 17:08:22 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_alloc_tabtab(char const *s, char c)
{
	int i;
	int j;
	char **str;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			j++;
		i++;
	}
	*str = ft_strnew(ft_strlen(s) - j);
	return (*str);
}

char	**ft_strsplit(char const *s, char c)
{
	int i;
	int j;
	int k;
	char **str;

	i = 0;
	j = 0;
	k = 0;
	*str = ft_alloc_tabtab(s, c);
	while (s[i] && str[k][j])
	{
		if (s[i] != c)
		{
			str[j] = s[i];
			i++;
			j++;
		}
		else
		{
			str[j]
		}
	}
}
