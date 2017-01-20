/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 14:47:18 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/14 14:48:51 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_point.h"

void		set_point(t_point *point)
{
		point->x = 42;
		point->y = 21;
}

int				main(void)
{
	t_point					point;
	set_point(&point);
	return (0);
}
