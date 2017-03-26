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

int		ft_strlen_trim(const char	*s)
{
	int	i;
	int a;

	i = 0;
	a = 0;
	while (s[i] && ft_isspace(s[i]))
		i++;
	if (i == (int)ft_strlen(s))
		return (0);
	while (s[a])
		a++;
	a--;
	while (s[a] && ft_isspace(s[a]))
		a--;
	return (a - i + 1);
}

char	*ft_strtrim(char const *s)
{
	char	*rst;
	int	i;
	int len;

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

//int	main(void)
//{
//	const char *str = "\n\n lol plop\tyolo\t\t";
//	write(1, ft_strtrim2(str), ft_strlen_trim(str));
//}
