/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 17:35:36 by alalaoui          #+#    #+#             */
/*   Updated: 2017/04/27 18:34:40 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char				*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			n;

	if (*little == '\0')
		return ((char *)big);
	n = ft_strlen(little);
	i = 0;
	while (big[i] != '\0' && (i + n) <= len)
	{
		if (ft_strncmp(big + i, little, n) == 0)
			return ((char*)(big + i));
		i++;
	}
	return (NULL);
}
