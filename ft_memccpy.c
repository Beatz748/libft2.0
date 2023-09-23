#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t n) {
	size_t	i;
	char	*dst;
	char	*src;

	i = 0;
	dst = (char *)destination;
	src = (char *)source;

	if (!dst && !src)
		return 0x000;

	while (i < n) {
		if (dst[i] == c)
			return 0x000;
		dst[i] = src[i];
		++i;
	}
	return destination;
}
