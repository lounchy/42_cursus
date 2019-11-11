#include <string.h>

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;

	if (n == 0 || dst == src)
		return (dst);
	i = -1;
	while (++i < n)
		((unsigned char *)dst)[i] = ((unsigned const char *)src)[i];
	return (dst); 
}
