#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = ft_strlen(s);
	while (i <= length)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return (char *)s + i;
		++i;
	}
	return NULL;
}
