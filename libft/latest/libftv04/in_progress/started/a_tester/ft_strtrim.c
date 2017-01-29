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

char	*ft_strtrim(char const *s)
{
	char *str;
	int i;
	int j;
	int blank;

	i = 0;
	blank = 0;
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		{
			i++;
			blank++;
		}
		i++;
	}
	if (blank == 0)
		return (ft_strcpy(s));
	i = 0;
	str = (char *)(malloc(sizeof(char) * ft_strlen(s) - blank));
	while (str[j] && s[i])
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
	str[j] = '\0';
	return (str);
}
