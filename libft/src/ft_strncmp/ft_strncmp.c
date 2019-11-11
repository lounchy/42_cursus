#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- && (*s1 || *s2))
	{
		if ((unsigned char)*s1 > (unsigned char)*s2)
			return (1);
		if ((unsigned char)*s1 < (unsigned char)*s2)
			return (-1);
		s1++;
		s2++;
	}
	return (0);
}
