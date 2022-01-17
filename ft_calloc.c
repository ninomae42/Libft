#include "libft.h"

// memory allocation
void	*ft_calloc(size_t count, size_t size)
{
	void	*p_ret;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	p_ret = malloc(size * count);
	if (p_ret == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_bzero(p_ret, count * size);
	return (p_ret);
}
