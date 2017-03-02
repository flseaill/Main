/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianseailles <florianseailles@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 17:23:45 by flseaill          #+#    #+#             */
/*   Updated: 2017/03/01 22:15:16 by florianseailles  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

static int	ft_neg(int n)
{
	int		neg;

	neg = n;
	if (n < 0)
		neg = -n;
	return (neg);
}

char		*ft_itoa(int n)
{
	char	*num;
	int		len;
	int		sign;

	sign = ft_isneg(n);
	len = ft_intlen(n) + sign;
	num = ft_strnew(len);
	if (!num)
		return (NULL);
	num += len;
	if (n && n == 0)
		*--num = '0';
	while (n != 0)
	{
		*--num = ft_neg(n % 10) + '0';
		n = n / 10;
	}
	if (sign)
		*--num = '-';
	return (num);
}

