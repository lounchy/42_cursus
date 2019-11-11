#include "ft_strlcpy.h"

size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		s_len;

	s_len = ft_strlen(src);
	if (dstsize == 0)
		return (s_len);
	while (--dstsize && *src)
		*(dst++) = *(src++);
	*(dst++) = '\0';
	return (s_len);
}
