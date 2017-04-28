/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 19:10:13 by alalaoui          #+#    #+#             */
/*   Updated: 2017/04/27 19:10:16 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_sort_list(int nb, char **list)
{
	char	*tmp;
	int		change;
	int		i;

	i = 0;
	change = 0;
	while (i < nb)
	{
		if (ft_strcmp(list[i], list[i + 1]) > 0)
		{
			tmp = list[i];
			list[i] = list[i + 1];
			list[i + 1] = tmp;
			change = 1;
		}
		i++;
	}
	if (change == 1)
		ft_sort_list(nb, list);
}
