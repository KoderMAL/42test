/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:32:33 by alalaoui          #+#    #+#             */
/*   Updated: 2017/04/16 17:48:07 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			*ft_strstr(const char *big, const char *little)
{
	const char	*p_little;
	const char	*p_big;

	if (*little == '\0')
		return ((char *)big);
	while (*big)
	{
		p_big = big;
		p_little = little;
		while (*p_little && *p_big == *p_little)
		{
			p_big++;
			p_little++;
		}
		if (*p_little == '\0')
			return ((char *)big);
		big++;
	}
	return (NULL);
}
