#include "libft.h"

void	*ft_memcpy(void *destination, const void  *source, size_t n) {
	size_t	i;
	char	*dst;
	char	*src;

	i = 0;
	src = (char *)source;
	dst = destination;

	if (!src && !dst)
		return (0x000);
	while (i < n) {
		dst[i] = src[i];
		++i;
	}
	return destination;
}
