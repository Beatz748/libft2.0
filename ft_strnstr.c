#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[0])
		return (char *)haystack;
	while (haystack[i] && i < n)
	{
		j = 0;
		while (haystack[i] && needle[j] && (unsigned char)haystack[i + j] == (unsigned char)needle[j])
		{
			++j;
		}
		if (needle[j] == '\0' && i + j <= n)
			return (char *)(haystack + i);
		++i;
	}
	return 0x000;
}
