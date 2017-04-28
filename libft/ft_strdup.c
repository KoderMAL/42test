/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 20:43:39 by alalaoui          #+#    #+#             */
/*   Updated: 2017/04/19 14:51:30 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *s1)
{
	char	*dest;

	if (!(dest = (char*)malloc(sizeof(*dest) * (ft_strlen(s1) + 1))))
		return (NULL);
	ft_strcpy(dest, s1);
	return (dest);
}
