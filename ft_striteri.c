#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	cnt;

	if (s == NULL || f == NULL)
		return ;
	cnt = 0;
	while (s[cnt] != '\0')
	{
		f(cnt, &s[cnt]);
		cnt++;
	}
}
