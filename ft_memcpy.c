/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 17:42:33 by alalaoui          #+#    #+#             */
/*   Updated: 2017/04/26 14:58:29 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void			*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*pdst;
	char		*psrc;

	pdst = (char*)dst;
	psrc = (char*)src;
	while (n--)
		*pdst++ = *psrc++;
	return (dst);
}
