/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 02:15:52 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/30 02:27:36 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strncpy(char *dst, const char *src, int len)
{
	int i;

	i = 0;
	while(src[i] && len > 0)
	{	
		dst[i] = src[i];
		len--;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

