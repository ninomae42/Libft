#include "libft.h"

static int	ft_isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}

static int	ft_islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

// alphabetic character test
int	ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	else
		return (0);
}

//// uchar max-> 255
//#include <assert.h>
//#include <ctype.h>
//#include <stdio.h>
//
//int	main(void)
//{
//	int	cnt;
//
//	cnt = -1;
//	while (cnt <= 512)
//	{
//		printf("cnt: %i, honke-> %i, jisaku-> %i\n",
//		cnt, isalpha(cnt), ft_isalpha(cnt));
//		assert(isalpha(cnt) == ft_isalpha(cnt));
//		cnt++;
//	}
//	return (0);
//}
