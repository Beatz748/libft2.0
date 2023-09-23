#include "libft.h"

void	ft_bzero(void *s, size_t n) {
	size_t	i;
	char	*dst;

	dst = (char *)s;
	i = 0;
	while (i < n) {
		dst[i] = '\0';
		++i;
	}
}
