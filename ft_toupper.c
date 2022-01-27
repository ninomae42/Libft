/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashimiz <tashimiz@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:01:12 by tashimiz          #+#    #+#             */
/*   Updated: 2022/01/27 17:01:13 by tashimiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
