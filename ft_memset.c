#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n) {
	char	*dst;
	size_t	i;
	dst = destination;
	i = 0;

	while (i < n) {
		dst[i] = c;
		++i;
	}

	return (destination);

}
