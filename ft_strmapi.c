#include "libft.h"

// Applies the function 'f' to each character of the string 's',
// and passing its index as first argument to create a new string
// resulting from successive applications of 'f'.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p_ret;
	unsigned int	cnt;

	if (s == NULL || f == NULL)
		return (NULL);
	p_ret = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (p_ret == NULL)
		return (NULL);
	cnt = 0;
	while (s[cnt] != '\0')
	{
		p_ret[cnt] = f(cnt, s[cnt]);
		cnt++;
	}
	p_ret[cnt] = '\0';
	return (p_ret);
}
