/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 15:07:15 by alalaoui          #+#    #+#             */
/*   Updated: 2017/04/13 18:33:16 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Creer un  result pour renvoyer a la fin ladresse du premier caractere,
** On le sauve au debut
*/

char		*ft_strcat(char *s1, const char *s2)
{
	char	*result;

	result = s1;
	while (*s1 != '\0')
		s1++;
	ft_strcpy(s1, s2);
	return (result);
}
