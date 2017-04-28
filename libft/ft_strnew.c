/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 15:54:52 by alalaoui          #+#    #+#             */
/*   Updated: 2017/04/20 17:09:41 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char		*ft_strnew(size_t size)
{
	char	*strnew;

	if (!(strnew = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(strnew, size);
	strnew[size] = '\0';
	return (strnew);
}
