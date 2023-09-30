#include "libft.h"

int	isValidSym(int c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if ((unsigned char)set[i] == (unsigned char)c)
			return 1;
		++i;
	}
	return 0;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] != '\0' && isValidSym(s1[i], set))
		++i;
	while (i < j && isValidSym(s1[j], set))
		--j;
	if (!(str = (char *)malloc((j - i + 2) * sizeof(char))))
		return 0x000;
	s1 += i;
	j -= i - 1;
	i = 0;
	while (s1[i] && i < j)
	{
		str[i] = s1[i];
		++i;
	}

	return str;
}


//int	main()
//{
//	const char *s1 = "1deABC3d";
//	const char *set = "1d3e";
//	printf("%s\n", ft_strtrim("   xxx   xxx", " x"));
//	printf("%s\n", ft_strtrim(s1, set));
//}
