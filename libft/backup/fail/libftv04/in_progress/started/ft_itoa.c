/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 17:23:45 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/25 17:27:23 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_lennum(int n)
{
	int i;

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

int		ft_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

int		ft_nosign(int n)
{
	int nosign;

	nosign = n;
	if (n < 0)
		nosign = -n;
	return (nosign);

}

char	*ft_itoa(int n)
{
	
}
