#include "libft.h"

int	ft_isprint(int c)
{
	if ((unsigned char)c >= '\40' && (unsigned char)c <= '\176')
		return 1;
	return 0;
}

