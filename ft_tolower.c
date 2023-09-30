#include "libft.h"

int	ft_tolower(int c)
{
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		return ((unsigned char)c + 32);
	return c;
}
