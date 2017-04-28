/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 15:53:54 by alalaoui          #+#    #+#             */
/*   Updated: 2017/04/24 14:06:57 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_words(char const *s, char c)
{
	int i = 0;
	int w = 0;
	int flag = 0;

	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			w++;
			flag = 1;}
		if (s[i] == c && flag == 1)
			flag = 0;
		i++;
	}
	return (w);
}

int			main(int ac, char **av)
{
	if (ac)
		printf("-Start-\n");
//	if (strcmp(av[1], "words") == 0)
//		printf("words=%d\n", ft_words(av[2], *av[3]));
	if (strcmp(av[1], "len") == 0)
	{
		printf("<IN>\n");
		printf("intlen=%d\n", ft_intlen(atoi(av[2])));
	}
	printf("-End-\n");
	return (0);
}
