#include "libft.h"

// test for ASCII character
int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
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
//		printf("cnt: %i, honke->%i, jisaku->%i\n", cnt,
//			isascii(cnt), ft_isascii(cnt));
//		assert(isascii(cnt) == ft_isascii(cnt));
//		cnt++;
//	}
//	puts("OK");
//	return (0);
//}
