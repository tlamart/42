/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamart <tlamart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 16:38:34 by tlamart           #+#    #+#             */
/*   Updated: 2019/02/08 16:54:19 by tlamart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int		main(int ac, char **av)
{
	char	*line;
	int		i;
	int		fd;

	i = 1;
	while (i < ac)
	{
		fd = open(av[i]);
		ft_putendl(av[i]);
		while (get_next_line(fd, &line))
		{
			ft_putendl(line);
			ft_strdel(&line);
		}
		ft_putendl("FIN DE LECTURE DU FICHIER");
		close(fd);
		i++;
	}
}
