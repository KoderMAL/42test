/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 18:54:56 by alalaoui          #+#    #+#             */
/*   Updated: 2017/04/25 15:22:22 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** on passe le next du new a alst et on assigne le premier element new
*/

void		ft_lstadd(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
