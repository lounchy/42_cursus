#include "ft_strrchr.h"

char			*ft_strrchr(const char *s, int c)
{
	size_t		i;
	size_t		n;
	int		diff;

	diff = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			n = i;
			diff = 1;
		}
		i++;
	}
	if (diff)
		return ((char*)ft_memchr((const void*)(s + n), c, diff));
	else if ((char)c == '\0')
		return ((char*)(s + i));
	else
		return (0);
}
