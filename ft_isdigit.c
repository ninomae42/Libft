#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
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
//		printf("cnt:%i, honke->%i, jisaku->%i\n", cnt,
//			isdigit(cnt), ft_isdigit(cnt));
//		assert(isdigit(cnt) == ft_isdigit(cnt));
//		cnt++;
//	}
//	return (0);
//}
