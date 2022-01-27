#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_ret;
	t_list	*new;

	lst_ret = NULL;
	if (lst == NULL || f == NULL)
		return (NULL);
	while (lst != NULL)
	{
		new = ft_lstnew((*f)(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&lst_ret, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_ret, new);
		lst = lst->next;
	}
	return (lst_ret);
}
