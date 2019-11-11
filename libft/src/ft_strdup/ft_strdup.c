#include "ft_strdup.h"

char			*ft_strdup(const char *s1)
{
	size_t		len;
	char		*mem;

	len = ft_strlen(s1);
	if (!(mem = ft_calloc(len + 1, sizeof(*mem))))
		return (NULL);
	return ((char*)ft_memcpy(mem, s1, len));
}
