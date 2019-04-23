/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcreate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamart <tlamart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 09:13:00 by tlamart           #+#    #+#             */
/*   Updated: 2019/04/22 09:17:18 by tlamart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstcreate(t_list *lst, void *content, size_t content_size)
{
	t_list	*new;

	if (!(new = ft_memalloc(sizeof(lst))))
		return (NULL);
	new->content = content;
	new->content_size = content_size;
	return (new);
}
