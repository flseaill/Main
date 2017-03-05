/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 17:23:45 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/30 06:14:59 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen(int n)
{
	size_t i;

	if (n == 0)
		return (1);
	i = 0;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static int	ft_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static int	ft_neg(int n)
{
	int neg;

	neg = n;
	if (n < 0)
		neg = -n;
	return (neg);

}

char		*ft_itoa(int n)
{
	char	*num;
	int		len;
	int		 sign;

	sign = ft_sign(n);
	len = ft_charlen(n) + sign;
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
