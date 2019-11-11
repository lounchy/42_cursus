#include "ft_strlcat.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		d_len;
	size_t		s_len;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dstsize <= d_len)
		return (s_len + dstsize);
	dst += d_len;
	dstsize -= d_len;
	while (--dstsize && *src)
		*(dst++) = *(src++);
	*(dst++) = '\0';
	return (d_len + s_len);
}
