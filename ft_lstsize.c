#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return i;
	while (lst)
	{
		lst = lst->next;
		++i;
	}
	return i;
}
