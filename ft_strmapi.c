#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*result;

	i = 0;
	len = ft_strlen(s);
	if (!f || !s)
		return 0x000;
	if (!(result = (char *)malloc(len * sizeof(char))))
		return 0x000;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		++i;
	}
	result[i] = 0;
	return result;
}
