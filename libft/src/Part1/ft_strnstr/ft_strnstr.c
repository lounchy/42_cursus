/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelinsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 20:15:34 by dbelinsk          #+#    #+#             */
/*   Updated: 2019/11/11 20:21:25 by dbelinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strnstr.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		n_len;

	if (*(needle) == '\0' || haystack == needle)
		return ((char*)haystack);
	if (len == 0 || !haystack[0])
		return (NULL);
	n_len = ft_strlen(needle);
	while (len > n_len && *haystack)
	{
		if (*haystack == *needle)
		{
			if (ft_strncmp(haystack, needle, n_len) == 0)
				return ((char*)haystack);
			else if (len < n_len)
				return (NULL);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
