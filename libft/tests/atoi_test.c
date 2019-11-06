/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:40:10 by dbelinsk          #+#    #+#             */
/*   Updated: 2019/11/06 17:55:09 by dbelinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void				tester(char *str, int *res)
{
	int		a_res;
	int		f_res;

	a_res = atoi(str);
	f_res = ft_atoi(str);
	if (a_res == f_res)
	{
		printf(" OK");
		*res += 1;
	}
	else
		printf(" FAIL");
	printf(".............%d | %d\n", a_res, f_res);
}

void				atoi_test(void)
{
	int			res;

	res = 0;
	printf("\n------------Test [ft_atoi]---------------\n");
	printf("TEST - 1/20: [0] =>");
	tester("0", &res);
	printf("TEST - 2/20: [-2] =>");
	tester("-2", &res);
	printf("TEST - 3/20: [\\n\\t-45] =>");
	tester("\n\t-45", &res);
	printf("TEST - 4/20: [162/8] =>");
	tester("162/8", &res);
	printf("TEST - 5/20: [-654] =>");
	tester("-654", &res);
	printf("TEST - 6/20: [654] =>");
	tester("654", &res);
	printf("TEST - 7/20: [0988] =>");
	tester("0988", &res);
	printf("TEST - 8/20: [00000988] =>");
	tester("00000988", &res);
	printf("TEST - 9/20: [+-377] =>");
	tester("+-377", &res);
	printf("TEST - 10/20: [-+773] =>");
	tester("-+773", &res);
	printf("TEST - 11/20: [+99+9] =>");
	tester("+99+9", &res);
	printf("TEST - 12/20: [-99-9] =>");
	tester("-99-9", &res);
	printf("TEST - 13/20: [\\e475] =>");
	tester("\e475", &res);
	printf("TEST - 14/20: [\\t\\n\\r\\v\\f  469 \\n] =>");
	tester("\t\n\r\v\f  469 \n", &res);
	printf("TEST - 15/20: [-2147483648] =>");
	tester("-2147483648", &res);
	printf("TEST - 16/20: [2147483647] =>");
	tester("2147483647", &res);
	printf("TEST - 17/20: 999999999999] =>");
	tester("999999999999", &res);
	printf("TEST - 18/20: [-999999999999999] =>");
	tester("-999999999999999", &res);
	printf("TEST - 19/20: [99999999999999999999999] =>");
	tester("999999999999999999999", &res);
	printf("TEST - 20/20: [] =>");
	tester("", &res);
	printf("-----------RESULT %d of 20------------------\n", res);
}
