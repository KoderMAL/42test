/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 17:54:17 by alalaoui          #+#    #+#             */
/*   Updated: 2017/04/27 17:00:28 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char				*ft_strjoin(char const *s1, char const *s2)
{
	char			*fresh;
	unsigned int	len;

	if ((s1 == NULL || s2 == NULL))
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(fresh = ft_strnew(len)))
		return (NULL);
	ft_strcpy(fresh, s1);
	ft_strcat(fresh, s2);
	return (fresh);
}
