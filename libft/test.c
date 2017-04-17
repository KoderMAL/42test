/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 19:26:24 by alalaoui          #+#    #+#             */
/*   Updated: 2017/04/17 15:17:32 by alalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int			main(int ac, char **av)
{
	char	dst1[20];
	char	src1[20];
	char	dst2[20];
	char	src2[20];

	printf("-START-\n");
	if (ac == 1)
		return(printf("%s\n", "Please enter ft_name with argument(s)"));
	//	if (strcmp(av[1], "strlen") == 0)
	//		printf("Strlen: %lu\nYours: %lu\n", strlen(av[2]), ft_strlen(av[2]));
	//	if (strcmp(av[1], "atoi") == 0)
	//		printf("Atoi: %d\nYours: %d\n", atoi(av[2]), ft_atoi(av[2]));
	//	if	(strcmp(av[1], "strcpy") == 0)
	//		printf("Strcpy: %s\nYours: %s\n", strcpy(av[2], av[3]), ft_strcpy(av[2], av[3]));
	//		printf("Strcpy: %s\n", strcpy(av[2], av[3]));
	//	if	(strcmp(av[1], "strdup") == 0)
	//		printf("Strdup: %s\nYours: %s\n", strdup(av[2]), ft_strdup(av[2]));
//	if	(strcmp(av[1], "strcat") == 0)
//		printf("Strcat: %s\nYours: %s\n", strcat(av[2], av[3]), ft_strcat(av[2], av[3]));
//		printf("Strcat: %s\n", ft_strcat2(av[2], av[3]));
	if	(strcmp(av[1], "strlcat") == 0)
	{
		strcpy(dst1, av[2]);
		strcpy(src1, av[3]);
		strcpy(dst2, av[4]);
		strcpy(src2, av[5]);
		printf("Strlcat: %lu\n dst1:%s\n", strlcat(dst1, src1, atoi(av[6])), dst1);
		//		printf("Yours: %lu\n  ds2:%s\n", ft_strlcat(dst2, src2, atoi(av[6])), dst2);
	}
	if	(strcmp(av[1], "strncat") == 0)
	{
		strcpy(dst1, av[2]);
		strcpy(src1, av[3]);
		strcpy(dst2, av[4]);
		strcpy(src2, av[5]);
		printf("Strncat: %s\n", strncat(dst1, src1, atoi(av[6])));
		//		printf("Yours: %s\n", ft_strncat(dst2, src2, atoi(av[6])));
	}
	if (strcmp((av[1]), "strstr") == 0)
	{
		strcpy(dst1, av[2]);
		strcpy(src1, av[3]);
		strcpy(dst2, av[4]);
		strcpy(src2, av[5]);
		printf("Strstr: %s\n", strstr(dst1, src1));
		//		printf("Yours: %s\n", ft_strstr(dst1, src1));
	}
	if (strcmp((av[1]), "strnstr") == 0)
	{
		strcpy(dst1, av[2]);
		strcpy(src1, av[3]);
		strcpy(dst2, av[4]);
		strcpy(src2, av[5]);
		printf("Strnstr:->%s\n", strnstr(dst1, src1, atoi(av[6])));
		printf("Yours:->%s\n", ft_strnstr(dst2, src2, atoi(av[6])));
	}
	printf("-END-\n");
	return (0);
}


