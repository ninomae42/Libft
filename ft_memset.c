#include "libft.h"

// fill a byte string with a byte value
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cnt;
	unsigned char	*p_b;

	if (len == 0)
		return (b);
	cnt = 0;
	p_b = (unsigned char *)b;
	while (cnt < len)
	{
		*p_b = (unsigned char)c;
		p_b++;
		cnt++;
	}
	return (b);
}
