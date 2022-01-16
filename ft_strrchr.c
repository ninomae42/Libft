#include "libft.h"

// locate character in string
char	*ft_strrchr(const char *s, int c)
{
	char	*p_s;

	p_s = (char *)s;
	p_s = p_s + ft_strlen(p_s);
	if ((char)c == '\0')
		return (p_s);
	while (p_s != s)
	{
		if (*p_s == (char)c)
			return (p_s);
		p_s--;
	}
	if (*p_s == (char)c)
		return (p_s);
	return (NULL);
}
