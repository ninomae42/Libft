#include "libft.h"

// printing character test (space character inclusive)
int	ft_isprint(int c)
{
	if (' ' <= c && c <= '~')
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
//	cnt = -1;
//	while (cnt <= 255)
//	{
//		printf("cnt: %i, honke->%i, jisaku->%i\n", cnt,
//			isprint(cnt), ft_isprint(cnt));
//		assert(isprint(cnt) == ft_isprint(cnt));
//		cnt++;
//	}
//	puts("OK");
//}
