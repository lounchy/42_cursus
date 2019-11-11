#include "ft_strnstr.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		n_len;
	size_t		nl_aux;

	if (*(needle) == '\0' || haystack == needle)
		return ((char*)haystack);
	n_len = ft_strlen(needle);
	nl_aux = n_len;
	while (len-- && *haystack)
		if (*(++haystack) == *needle)
			while (len-- && (*(needle++) == *(haystack++)))
				if ((--n_len) == 0)
					return ((char*)haystack - nl_aux);
	return (NULL);
}
