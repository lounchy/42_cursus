
#include "ft_memmove.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	if (len == 0 || dst == src)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len-- > 0)
		((unsigned char *)dst)[len] = ((unsigned const char *)src)[len];
	return (dst);
}
