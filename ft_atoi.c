#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	size_t		i;
	int		minus;
	long long int	result;

	i = 0;
	result = 0;

	minus = 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\r' ||
		str[i] == '\v' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] == '-')
	{
		minus = -1;
		++i;
	}
	while (str[i] >= '-' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		++i;
	}
	return ((int)(result * minus));
}

//int	main()
//{
//	const char* str = " 9223";
//	printf("%i\n", ft_atoi(str));
//	printf("%i\n", atoi(str));
//}
