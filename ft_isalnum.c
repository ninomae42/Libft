/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashimiz <tashimiz@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:54:12 by tashimiz          #+#    #+#             */
/*   Updated: 2022/01/27 16:54:14 by tashimiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// alphanumeric character test
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
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
//	while (cnt <= 512)
//	{
//		printf("cnt: %i, honke->%i, jisaku->%i\n", cnt,
//			isalnum(cnt), ft_isalnum(cnt));
//		assert(isalnum(cnt) == ft_isalnum(cnt));
//		cnt++;
//	}
//	puts("OK");
//	return (0);
//}
