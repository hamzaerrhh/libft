#include "includes/libft.h"

static int	is_white_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}



int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;
	int count=0;
	int pre;
	i = 0;
	sign = 1;
	result = 0;
	pre=0;

	while (is_white_space(nptr[i]))
		i++;

	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;


	count = ft_strlen(&nptr[i]);

	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		if (count > 19)
		{
			if (sign == 1 && result / 10 != pre)
				return -1;
			 if (sign == -1 && result / 10 != pre)
			  return 0;
					 pre = result;
		}
		i++;
	}
	return (result * sign);
}

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("10000000000000000000545"));
// 	printf("%d\n", atoi("10000000000000000000545"));
// 	return (0);
// }