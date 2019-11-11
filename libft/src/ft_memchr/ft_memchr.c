#include <string.h>

void			*ft_memchr(const void *s, int c, size_t n)
{
	while (n-- > 0)
	{
		if ((unsigned char)c == (*(unsigned char*)s))
			return ((unsigned char*)s);
		s++;
	}
	return (NULL);
}
