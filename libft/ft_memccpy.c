/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 18:11:28 by alalaoui          #+#    #+#             */
/*   Updated: 2017/04/26 15:59:29 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*pdst;
	unsigned char	*psrc;

	pdst = (unsigned char*)dst;
	psrc = (unsigned char*)src;
	while (n--)
	{
		*pdst = *psrc;
		if (*pdst == (unsigned char)c)
			return ((void*)pdst + 1);
		pdst++;
		psrc++;
	}
	return (NULL);
}
