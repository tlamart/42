/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_variadique.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamart <tlamart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 10:52:37 by tlamart           #+#    #+#             */
/*   Updated: 2019/02/11 11:42:27 by tlamart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

int		main(void)
{
	int		a;
	int		b;

	a = ft_printf("format_fin%d %i %o %u %x %x %c %f %p %X %d %d %d %i %i %i %o %o %o %u %u %u %s %s %s %c %c %c %X %X %X %x %x %x %X %X %X %s %c %f %p %p\n",\
			-27, -10, 112, 42000, 5, 0, 97, 1.23, NULL, 13, 12, 10, 9, 53, 42, 19, 18, 1, 9, 75, 4, 60, "first string", "second one",\
			"last followed by 3 char(s) : tib" , 't', 'i', 'b', 90, 91, 92, 93, 94, 95, 96, 97, 99, "bientot la fin", '\n', 0.0123456789, NULL, "end");	
	b = printf("format_fin%d %i %o %u %x %x %c %f %p %X %d %d %d %i %i %i %o %o %o %u %u %u %s %s %s %c %c %c %X %X %X %x %x %x %X %X %X %s %c %f %p %p\n",\
			-27, -10, 112, 42000, 5, 0, 97, 1.23, NULL, 13, 12, 10, 9, 53, 42, 19, 18, 1, 9, 75, 4, 60, "first string", "second one",\
			"last followed by 3 char(s) : tib" , 't', 'i', 'b', 90, 91, 92, 93, 94, 95, 96, 97, 99, "bientot la fin", '\n', 0.0123456789, NULL, "end");
	if (a == b)
		ft_putendl("OK");
	else
		ft_putendl("Not ok");
}
