/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 15:54:52 by alalaoui          #+#    #+#             */
/*   Updated: 2017/06/22 14:20:58 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*strnew;

	if (!(strnew = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(strnew, size);
	strnew[size] = '\0';
	return (strnew);
}
