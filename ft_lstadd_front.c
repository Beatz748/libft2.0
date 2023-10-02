#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *nev)
{
	if (!nev || !lst)
		return ;
	nev->next = *lst;
	*lst = nev;
}
