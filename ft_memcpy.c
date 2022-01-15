#include "libft.h"

// copy memory area
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		cnt;
	char		*p_dst;
	const char	*p_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (n == 0)
		return (dst);
	cnt = 0;
	p_dst = (char *)dst;
	p_src = (const char *)src;
	while (cnt < n)
	{
		p_dst[cnt] = p_src[cnt];
		cnt++;
	}
	return (dst);
}
