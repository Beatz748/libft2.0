#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*node;

	ptr = 0;
	if (!lst || !f || !del)
		return 0;

	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&ptr, del);
			return 0;
		}
		ft_lstadd_back(&ptr, node);
		lst = lst->next;
	}
	return ptr;
}
