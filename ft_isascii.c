#include "libft.h"

int	ft_isascii(int c)
{
	if ((unsigned char)c >= '\0' && (unsigned char)c <= '\177')
		return 1;
	return 0;
}
