#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	l;

	l = ft_strlen(s1);
	s2 = (char *)malloc(l * sizeof(char));
	ft_memcpy(s2, s1, l);

	return s2;
}
