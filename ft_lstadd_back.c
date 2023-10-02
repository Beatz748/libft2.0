#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *nev)
{
	if (!(*lst))
	{
		*lst = nev;
		return;
	}
	ft_lstlast(*lst)->next = nev;
}
