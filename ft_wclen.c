/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wclen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 14:15:03 by alalaoui          #+#    #+#             */
/*   Updated: 2017/08/31 15:01:44 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <wchar.h>

int				ft_wclen(wchar_t wc)
{
	int len;

	len = 0;
	if ((int)wc < 0x80)
		len++;
	else if ((int)wc < 0x800)
		len += 2;
	else if ((int)wc < 0x10000)
		len += 3;
	else
		len += 4;
	return (len);
}
