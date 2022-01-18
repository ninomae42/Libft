#include "libft.h"

// locate a substring in a string
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*p_hs;
	size_t		len_ndl;

	len_ndl = ft_strlen(needle);
	if (len_ndl == 0)
		return ((char *)haystack);
	p_hs = (const char *)haystack;
	while (*p_hs != '\0' && len >= len_ndl)
	{
		if (*p_hs == *needle
			&& ft_strncmp(p_hs, needle, len_ndl) == 0)
			return ((char *)p_hs);
		p_hs++;
		len--;
	}
	return (NULL);
}
