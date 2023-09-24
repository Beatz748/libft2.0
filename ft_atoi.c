#include "libft.h"
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	size_t		i;
	int		minus;
	unsigned long long result;

	i = 0;
	result = 0;

	minus = 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\r' ||
		str[i] == '\v' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '-' || str[i] == '+')
		++i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result < INT64_MAX)
			result = result * 10 + str[i] - '0';
		if (result > INT64_MAX && minus < 0)
			return 0;
		else if (result > INT64_MAX)
			return -1;
		++i;
	}
	return ((int)(result * minus));
}
