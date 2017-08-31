/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hxlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 11:17:51 by alalaoui          #+#    #+#             */
/*   Updated: 2017/08/31 15:02:26 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_put_hx(size_t nb)
{
	char *str;

	str = "0123456789abcdef";
	if (nb >= 16)
		ft_put_hx(nb / 16);
	ft_putchar(str[nb % 16]);
}

int			ft_hxlen(unsigned long long int nb)
{
	int		len;

	len = 1;
	while (nb /= 16)
		len++;
	return (len);
}
