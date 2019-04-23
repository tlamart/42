/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 15:06:11 by tlamart           #+#    #+#             */
/*   Updated: 2019/04/23 17:33:33 by tlamart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*cast_s1;
	const unsigned char	*cast_s2;
	size_t				i;

	i = 0;
	cast_s1 = (const unsigned char*)s1;
	cast_s2 = (const unsigned char*)s2;
	while (i < n - 1 && cast_s1[i] == cast_s2[i])
		i++;
	return (cast_s1[i] - cast_s2[i]);
}
