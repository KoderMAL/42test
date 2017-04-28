/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 14:31:49 by alalaoui          #+#    #+#             */
/*   Updated: 2017/04/27 15:30:07 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char			*ft_strncpy(char *dst, char *src, size_t len)
{
	char	*pdst;

	pdst = dst;
	while (*src != '\0' && len > 0)
	{
		*dst++ = *src++;
		len--;
	}
	while (len > 0)
	{
		*dst++ = '\0';
		len--;
	}
	return (pdst);
}
