#include "libft.h"
#include <limits.h>

size_t	intLen(int a)
{
	size_t	counter;

	counter = 0;
	if (a == 0)
		return (1);
	if (a < 0)
	{
		++counter;
		a *= -1;
	}

	while (a > 0)
	{
		a /= 10;
		++counter;
	}

	return counter;
	
}

char	*ft_itoa(int a)
{
	int	x;
	size_t	count;
	char	*s;

	count = intLen(a);
	if (a == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(s = (char *)malloc(sizeof(char) * (count + 1))))
		return 0x000;
	s[count] = '\0';
	x = a;
	if (x < 0)
		x *= -1;
	while (--count)
	{
		s[count] = (x % 10) + '0';
		x /= 10;
	}
	s[count] = (x % 10) + '0';
	if (a < 0)
		s[0] = '-';
	return s;
}

//int	main()
//{
//	int a = 1;
//	printf("%s\n", ft_itoa(a));
//}
