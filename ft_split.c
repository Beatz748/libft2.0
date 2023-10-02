#include "libft.h"

size_t	getArrayCount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;

	while (s[i])
	{
		if ((s[i] != c)
				&& (s[i + 1] == c
					|| s[i + 1] == '\0'))
		{
			++count;
		}
		++i;
	}
	return count;
}

size_t	word_size(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		++i;
	return (i);
}

void	*ft_free(void **tab, size_t l)
{
	size_t	i;

	i = 0;
	while (i < l)
	{
		free(tab[i]);
		++i;
	}
	free(tab);
	return NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*ptr;
	size_t	i;
	size_t	count;
	size_t	pad;

	i = 0;
	pad = 0;
	if (!s)
		return NULL;
	ptr = (char *)s;
	count = getArrayCount(s, c);
	if (!(result = (char **)malloc((count + 1) * sizeof(char **))))
		return 0x000;
	while (i < count)
	{
		while ((*ptr) && (*(ptr)) == c)
			++ptr;
		pad = word_size(ptr, c);
		if (!(result[i] = (char *)malloc(pad * sizeof(char))))
			return (ft_free((void **)result, count));
		result[i] = ft_memcpy(result[i], ptr, pad);
		result[i][pad] = 0;
		ptr += pad;
		++i;
	}
	result[i] = NULL;
	return result;
}
