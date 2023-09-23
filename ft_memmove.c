#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *destination, const void *source, size_t n) {
	unsigned char	*dst;
	unsigned char	*src;
	
	dst = (unsigned char *)destination;
	src = (unsigned char *)source;

	if (!src && !dst)
		return 0x000;
	if (src == dst || n == 0)
		return destination;
	if (dst > src && dst < src + n)
	{
		dst += n;
		src += n;
		while (n-- > 0)
			*(--dst)=*(--src);
	}
	else
		while (n-- > 0)
			*(dst++) = *(src++);
	return destination;
}

//int	main() {
//	unsigned char src[10] = "0123456789";
//
//	printf("src old: %s\n", src);
//
//	char *h = ft_memmove(&src[0], &src[3], 3);
//
//	printf("src new: %s\n", h);
//}
//
