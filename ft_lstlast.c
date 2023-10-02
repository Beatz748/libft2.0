#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return 0x000;
	while (lst && lst->next)
		lst = lst->next;
	return lst;
}
