/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 19:26:24 by alalaoui          #+#    #+#             */
/*   Updated: 2017/04/27 16:36:24 by alalaoui         ###   ########.fr       */
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

	bzero(dst1, 20);
	bzero(dst2, 20);
	printf("-START-\n");
	if (ac == 1)
		return(printf("%s\n", "Please enter ft_name with argument(s)"));
//	if (strcmp(av[1], "strlen") == 0)
//		printf("Strlen: %lu\nYours: %lu\n", strlen(av[2]), ft_strlen(av[2]));
	if (strcmp(av[1], "atoi") == 0)
//			printf("Atoi: %d\nYours: %d\n", atoi(av[2]), ft_atoi(av[2]));
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
	if (strcmp((av[1]), "strrchr") == 0)
	{
		printf("Strrchr:->%s\n", strrchr(av[2], '4'));
//		printf("Yours:->%s\n", ft_strrchr(av[2], '4'));
	}
	if (strcmp((av[1]), "memmove") == 0)
	{
		printf("Memmove:->%s\n", memmove(av[2], av[3], atoi(av[4])));
//		printf("Yours:->%s\n", ft_memmove(av[2], av[3], atoi(av[4])));
	}
	if (strcmp((av[1]), "memchr") == 0)
	{
		printf("Memchr:->%s\n", memchr(av[2], atoi(av[3]), atoi(av[4])));
//		printf("Yours:->%s\n", ft_memchr(av[2], atoi(av[3]), atoi(av[4])));
	}
	if (strcmp((av[1]), "memalloc") == 0)
	{
//		void *test;
//		test = ft_memalloc(atoi(av[2]));
//		printf("Before:%s|\n", test);
//		memcpy(test, av[3], atoi(av[4]));
//		printf("After:%s|\n", test);
	}
	if (strcmp(av[1], "strtrim") == 0)
	{
//		printf("strtrim:%s\n", ft_strtrim(av[2]));
	}
	if (strcmp(av[1], "strsub") == 0)
	{
//		printf("strsub%s\n", ft_strsub(av[2], atoi(av[3]), atoi(av[4])));
	}
	if (strcmp(av[1], "strncpy") == 0)
	{
		printf("strncpy:%s\n", strncpy(dst2, av[2], atoi(av[3])));
//		printf("myfunct:%s\n", ft_strncpy(dst1, av[2], atoi(av[3])));
	}
	if (strcmp(av[1], "strjoin") == 0)
	{
//		printf("strjoin:%s\n", ft_strjoin(av[2], av[3]));
	}
	if (strcmp(av[1], "strsplit") == 0)
	{
		int	i = 0;
//		char **gg = ft_strsplit(av[2], *av[3]);
//		while (gg[i])
//		{printf("%s\n", gg[i]);
		i++;
	}
	if (strcmp(av[1], "itoa") == 0)
	{
//		printf("itoa:%s\n", ft_itoa(atoi(av[2])));
	}
	printf("-END-\n");
	return (0);
}
