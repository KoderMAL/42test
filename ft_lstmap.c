/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 15:46:41 by alalaoui          #+#    #+#             */
/*   Updated: 2017/04/27 15:05:07 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*first;

	if (!lst || !f)
		return (NULL);
	if (!(new = ft_lstnew(lst->content, lst->content_size)))
		return (NULL);
	new = f(new);
	first = new;
	while (lst->next)
	{
		lst = lst->next;
		if (!(new->next = ft_lstnew(lst->content, lst->content_size)))
			return (NULL);
		new->next = f(new->next);
		new = new->next;
	}
	return (first);
}
