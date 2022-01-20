#include "libft.h"

// Allocates and returns a substring from the string 's'.
// The substring begins at index 'start' and is of maximum size 'len'.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p_ret;

	if (s == NULL)
		return (NULL);
	if (len == 0 || start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	p_ret = (char *)malloc(sizeof(char) * (len + 1));
	if (p_ret == NULL)
		return (NULL);
	ft_strlcpy(p_ret, &s[start], len + 1);
	return (p_ret);
}
