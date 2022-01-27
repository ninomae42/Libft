#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*p_lst;

	p_lst = (t_list *)malloc(sizeof(t_list) * 1);
	if (p_lst == NULL)
		return (NULL);
	p_lst->content = content;
	p_lst->next = NULL;
	return (p_lst);
}
