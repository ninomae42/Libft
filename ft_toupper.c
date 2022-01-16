#include "libft.h"

static int	ft_islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

// lower case to upper case letter conversion
int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - ('a' - 'A'));
	else
		return (c);
}

//#include <assert.h>
//#include <ctype.h>
//#include <stdio.h>
//
//int	main(void)
//{
//	int	cnt;
//
//	cnt = 0;
//	while (cnt <= 255)
//	{
//		printf("cnt->%i, honke->%i, jisaku->%i\n",
//			cnt, toupper(cnt), ft_toupper(cnt));
//		assert(toupper(cnt) == ft_toupper(cnt));
//		cnt++;
//	}
//	return (cnt);
//}
