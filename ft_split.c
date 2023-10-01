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
		{
			++count;
			while (s[i] && (unsigned char)s[i] == (unsigned char)c)
				++i;
			if (!s[i])
				--count;
		}
		++i;
	}
	return count;
}

size_t	word_size(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return i;
		++i;
	}
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
	while (i <= count)
	{
		while ((unsigned char)(*(ptr)) == (unsigned char)c)
			++ptr;
		if (!(*ptr))
			break;
		pad = word_size(ptr, c);
		if (!(result[i] = (char *)malloc(pad * sizeof(char))))
			return (ft_free((void **)result, count));
		ft_strlcpy(result[i], ptr, pad + 1);
		ptr += pad + 1;
		++i;
	}
	result[i] = NULL;
	return result;
}
