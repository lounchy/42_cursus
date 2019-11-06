/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:00:41 by dbelinsk          #+#    #+#             */
/*   Updated: 2019/11/06 18:47:42 by dbelinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void			go_memset(char *str, char *comp, int *res)
{
	int			is_good;
	int			i;

	is_good = 1;
	i = 0;
	if (str && comp)
		while (str[i] && comp[i])
		{
			if (str[i] != comp[i])
				is_good = 0;
			i++;
		}
	if (is_good == 1)
	{
		printf("OK");
		*res += 1;
	}
	else
		printf("FAIL");
	printf("...........%s | %s\n", str, comp);
}

void			memset_test(void)
{
	void		*mem;
	int			res;

	res = 0;
	if ((mem = malloc(sizeof(*mem) * 20)) == 0)
		return ;
	memset(mem, 'a', 20);
	printf("\n------------Test [ft_memset]-------------\n");
	printf("TEST - 1/7 => ");
	ft_memset(mem, 'b', 15);
	go_memset((char*)mem, "bbbbbbbbbbbbbbbaaaaa", &res);
	printf("TEST - 2/7 => ");
	ft_memset(mem, 'c', 10);
	go_memset((char*)mem, "ccccccccccbbbbbaaaaa", &res);
	printf("TEST - 3/7 => ");
	ft_memset(mem, 'd', 0);
	go_memset((char*)mem, "ccccccccccbbbbbaaaaa", &res);
	printf("TEST - 4/7 => ");
	ft_memset(mem, '@', 1);
	go_memset((char*)mem, "@cccccccccbbbbbaaaaa", &res);
	printf("TEST - 5/7 => ");
	ft_memset(mem, '\n', 3);
	go_memset((char*)mem, "\n\n\ncccccccbbbbbaaaaa", &res);
	printf("TEST - 6/7 => ");
	ft_memset(mem, '\0', 3);
	go_memset((char*)mem, "\0\0\0ddcccccbbbbbaaaaa", &res);
	printf("TEST - 7/7 => ");
	free(mem);
	mem = NULL;
	ft_memset(mem, '\n', 3);
	go_memset((char*)mem, NULL, &res);
	printf("------------RESULT %d of 7------------\n", res);
}
