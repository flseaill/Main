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
	size_t len;
	int i;
	int nb;
	char *nbr;

	i = 0;
	nb = -1;
	while (n = n / 10 != 0)
		len++;
	if (!(nbr = (char *)malloc(sizeof(char) * len))
		return (NULL);
	if (n < 0)
		printf("%d\n", -1);
	else
		printf("%zu\n", len);
	return ("fin");
}

int		main(void)
{
	ft_itoa();
}

/*	if (n < 0)
	{
		nbr[i++] = '-';
	}
	else
	{
		nbr[i] = ;
	}
	if (
	while ()
	{
	
	}
	return (nbr);
}*/
