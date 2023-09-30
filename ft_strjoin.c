#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_size;
	size_t	s2_size;
	char	*joined;

	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);

	if (!s1 || !s2)
		return 0x000;
	if (!(joined = (char *)malloc((s1_size + s2_size + 1) * sizeof(char))))
		return 0x000;
	ft_strlcpy(joined, s1, s1_size + 1);
	ft_strlcpy(joined + s1_size, s2, s2_size + 1);
	return joined;
}
