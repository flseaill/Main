/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 06:48:33 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/30 06:55:31 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnew(size_t size)
{
	size_t i;
	char *str;

	i = 0;
	str = (char *)(malloc(sizeof(char) * size + 1));
	if (!str)
		return (NULL);
	while (i != size)
	{
		str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	return (str);
}
