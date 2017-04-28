/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 15:16:08 by alalaoui          #+#    #+#             */
/*   Updated: 2017/04/19 15:36:47 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	void	*memory;

	if (!(memory = malloc(size)))
		return (NULL);
	return (ft_memset(memory, 0, size));
}
