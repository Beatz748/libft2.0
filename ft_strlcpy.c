#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t dstsize)
{
	size_t	i;

	i = 0;

	if (!destination || !source)
		return 0;
	while (source[i] && i < dstsize - 1 && dstsize)
	{
		destination[i] = source[i];
		++i;
	}
	if (dstsize)
		destination[i] = '\0';

	return ft_strlen(source);
}
