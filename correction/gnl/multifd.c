/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multifd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamart <tlamart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 16:54:33 by tlamart           #+#    #+#             */
/*   Updated: 2019/02/15 11:24:19 by tlamart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"
#include <fcntl.h>

int		main(int ac, char **av)
{
	int		fd[5];
	int		i;
	char	*line;
	int		nb_line;

	i = 0;
	while (i < 5)
	{
		fd[i] = open(av[i + 1]);
		i++;
	}
	nb_line = 0;
	while (nb_line < 5)
	{
		i = 0;
		while (i < 5)
		{
			get_net_line(fd[i], &line);
			ft_putendl(line);
			ft_strdel(&line);
			i++;
		}
		nb_line++;
	}
	return (0);
}
