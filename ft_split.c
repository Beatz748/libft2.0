#include "libft.h"

size_t	getArrayCount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;

	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			++count;
		++i;
	}
	if (count != 0)
		++count;
	return count;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	count;

	i = 0;
	count = getArrayCount(s, c);
	if (!(result = (char **)malloc(count * sizeof(char **))))
		return 0x000;
	

	return result;
}
