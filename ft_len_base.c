/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 16:51:38 by alalaoui          #+#    #+#             */
/*   Updated: 2017/08/29 18:27:15 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_nbrlen_base(unsigned long long int nb, size_t base)
{
	size_t	len;

	len = 1;
	while (nb /= base)
		len++;
	return (len);
}
