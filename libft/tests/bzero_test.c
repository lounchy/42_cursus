/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:00:29 by dbelinsk          #+#    #+#             */
/*   Updated: 2019/11/06 19:18:34 by dbelinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void			go_bzero(char *str, int n, int *res)
{
	int		i;
	int		nuls;

	i = 0;
	nuls = 0;
	if (str)
		while (i < 5)
		{
			if (str[i] == '\0')
				nuls++;
			i++;
		}
	if (n == nuls)
	{
		printf("OK");
		*res += 1;
	}
	else
		printf("FAIL");
	printf("........... n=%d | nls =%d\n", n, nuls);
}

void			bzero_test(void)
{
	void		*bz;
	int			res;

	res = 0;
	bz = malloc(sizeof(*bz) * 5);
	memset(bz, 'a', 5);
	printf("\n------------Test [ft_bzero]---------------\n");
	printf("TEST - 1/3 => ");
	ft_bzero(bz, 0);
	go_bzero((char*)bz, 0, &res);
	printf("TEST - 2/3 => ");
	ft_bzero(bz, 2);
	go_bzero((char*)bz, 2, &res);
	printf("TEST - 3/3 => ");
	free(bz);
	bz = NULL;
	ft_bzero(bz, 5);
	go_bzero((char*)bz, 0, &res);

}
