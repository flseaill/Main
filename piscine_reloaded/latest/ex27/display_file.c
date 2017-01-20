/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 17:51:20 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/19 17:59:25 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "includes/libft.h"

#define BUF_SIZE 10

void	ft_display_file(char *str)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(str, O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_display_file(argv[1]);
		return (1);
	}
	else if (argc > 2)
		ft_putstr("Too many arguments.");
	else if (argc < 2)
		ft_putstr("File name missing.");
	return (0);
}
