#include "libft.h"

size_t	ft_strlcat(char *destintaion, const char *source, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (destintaion[i] && i < dstsize)
		++i;
	j = i;
	while (source[i - j] && i + 1 < dstsize)
	{
		destintaion[i] = source[i - j];
		++i;
	}
	
	if (dstsize > j)
		destintaion[i] = '\0';
	return j + ft_strlen(source);
}
