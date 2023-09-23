#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t		i;
	unsigned char*	dst;

	dst = (unsigned char *)arr;
	i = 0;
	while (i < n)
	{
		if (dst[i] == (unsigned char)c)
			return dst + i;
		++i;
	}
	return (0x000);
}
