/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 16:35:58 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/25 16:56:17 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_sep(char const *s, char c)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			j++;
		i++;
	}
	return (j);
}

int		ft_strlen_split(char const *s, char c, int i)
{
	int j;

	j = 0;
	while (s[i] != c)
	{
		j++;
	}
}

char **ft_strsplit(char const *s, char c)
{
	int i;
	int j;
	char **str;

	i = 0;
	if (!str)
		return (NULL);
	*str = (char **)(malloc(sizeof(char) * ft_strlen(s) - j));
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
		{
			str[j] = ft_strnew(ft_strlen_split(s, c, i));
			while (s[i] != c)
				s[i] 
			j++;
		}
	}
	return (*str);
}
