/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_longnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 11:40:05 by alalaoui          #+#    #+#             */
/*   Updated: 2017/09/04 16:34:03 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_longnbr(long long int nb)
{
	if (nb <= LONG_MIN)
	{
		ft_putstr("-9223372036854775808");
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_put_longnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_put_long_unsigned_nbr(long long unsigned nb)
{
	if (nb > 9)
		ft_put_longnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}
