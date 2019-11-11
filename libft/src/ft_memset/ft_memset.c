/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:54:38 by dbelinsk          #+#    #+#             */
/*   Updated: 2019/11/06 18:47:32 by dbelinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memset(void *b, int c, size_t len)
{
	size_t					count;
	char					*str;

	count = c;
	count = 0;
	str = (char*)b;
	while (count < len)
	{
		str[count] = (char)c;
		count++;
	}
	return (b);
}
