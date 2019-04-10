/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   limits.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamart <tlamart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 12:39:19 by tlamart           #+#    #+#             */
/*   Updated: 2019/02/11 11:40:15 by tlamart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	unsigned int	max = UINT_MAX;
	unsigned long	min = ULONG_MAX;
	int				a[10];

	a[0] = ft_printf("int min = %d int max = %d\n", INT_MIN, INT_MAX);
	a[1] = printf("int min = %d int max = %d\n", INT_MIN, INT_MAX);
	a[2] = ft_printf("unsigned int max : octal = %o decimal = %u hexadecimal = %x HEXADECIMAL = %X\n", max, max, max, max);
	a[3] = printf("unsigned int max : octal = %o decimal = %u hexadecimal = %x HEXADECIMAL = %X\n", max, max, max, max);
	a[4] = ft_printf("long min = %ld long max = %ld\n", LONG_MIN, LONG_MAX);
	a[5] = printf("long min = %ld long max = %ld\n", LONG_MIN, LONG_MAX);
	a[6] = ft_printf("short min = %hd short max = %hd\n", SHRT_MIN, SHRT_MAX);
	a[7] = printf("short min = %hd short max = %hd\n", (short)SHRT_MIN, (short)SHRT_MAX);
	a[8] = ft_printf("unsigned long max : octal = %lo decimal = %lu hexadecimal = %lx HEXADECIMAL = %lX\n", min, min, min, min);
	a[9] = printf("unsigned long max : octal = %lo decimal = %lu hexadecimal = %lx HEXADECIMAL = %lX\n", min, min, min, min);
	ft_printf("%d =? %d | %d =? %d | %d =? %d | %d =? %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
}
