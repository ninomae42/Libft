#include "libft.h"
#include <limits.h>

// white-space character test
static int	ft_isspace(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	if (uc == '\t' || uc == '\n' || uc == '\v' || uc == '\f'
		|| uc == '\r' || uc == ' ')
		return (1);
	else
		return (0);
}

// overflow -> 1, underflow -> 2
static int	is_overflow(const char *str, int num, int sign)
{
	if (sign == -1 && num != 0 && LONG_MIN / num > sign)
		return (2);
	else if (sign == 1 && LONG_MAX - num * 10 < (*str - '0'))
		return (1);
	else
		return (0);
}

// convert ASCII string to integer
int	ft_atoi(const char *str)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		if (is_overflow(str, num, sign) == 1)
			return ((int)LONG_MAX);
		else if (is_overflow(str, num, sign) == 2)
			return ((int)LONG_MIN);
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * sign);
}
