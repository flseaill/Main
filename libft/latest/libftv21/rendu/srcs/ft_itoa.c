/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 19:19:07 by flseaill          #+#    #+#             */
/*   Updated: 2017/03/05 19:21:20 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(int n)
{
	char *str;
	int len;

	len = ft_intlen(n) + 1;
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	str = 
	return (str);
}
