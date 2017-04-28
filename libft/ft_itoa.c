/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 17:57:13 by alalaoui          #+#    #+#             */
/*   Updated: 2017/04/25 17:15:15 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char				*ft_itoa(int n)
{
	char			*fresh;
	int				len;
	int				i;
	unsigned int	nb;

	i = 0;
	nb = n;
	len = ft_intlen(n);
	if (!(fresh = ft_strnew(len)))
		return (NULL);
	if (n < 0 && len--)
	{
		fresh[i] = '-';
		i++;
		nb = -n;
	}
	while ((len - 1) >= 0)
	{
		fresh[i] = (nb / (ft_power(10, len - 1))) + 48;
		nb = nb - (nb / ft_power(10, len - 1)) * ft_power(10, (len - 1));
		len--;
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
