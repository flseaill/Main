/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 22:37:54 by flseaill          #+#    #+#             */
/*   Updated: 2017/02/15 17:23:50 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_strequ(const char *s1, const char *s2)
{
	if (s1 && s2)
	{
		if (ft_strcmp(s1, s2))
			return (0);
		else
			return (1);
	}
	return (0);
}
