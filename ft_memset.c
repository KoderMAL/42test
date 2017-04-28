/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 18:45:20 by alalaoui          #+#    #+#             */
/*   Updated: 2017/04/18 17:41:47 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*start;

	start = b;
	while (len-- > 0)
		*start++ = (unsigned char)c;
	return (b);
}
