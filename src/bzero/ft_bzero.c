/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:55:01 by dbelinsk          #+#    #+#             */
/*   Updated: 2019/11/06 19:18:26 by dbelinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void					ft_bzero(void *s, size_t n)
{
	size_t			count;
	char			*str;
	
	count = 0;
	str = (char*)s;
	if (!str)
		return ;
	while (count < n)
	{
		str[count] = '\0';
		count++;
	}	
}
