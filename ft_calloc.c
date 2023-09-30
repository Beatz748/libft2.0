#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return 0x000;
	ft_bzero(ptr, (count * size));
	return ptr;
}
