#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return 0x000;
	if (ft_strlen(s) < start)
	{
		if (!(str = (char *)malloc(sizeof(char))))
			return 0x000;
		*str = '\0';
		return str;
	}
	if (ft_strlen(s) - start > len)
		len += 1;
	else
		len = ft_strlen(s) - start + 2;
	if (!(str = (char *)malloc(len * sizeof(char))))
		return 0x000;
	ft_strlcpy(str, s + start, len);
	return str;
}
