/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrabba <herrabba@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 13:59:46 by herrabba          #+#    #+#             */
/*   Updated: 2026/10/15 16:18:29 by herrabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int	is_white_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int				sign;
	unsigned long	res;
	double			f;

	sign = 1;
	res = 0;
	f = 0;
	while (is_white_space(*nptr))
		nptr++;
	if ((*nptr == '-' || *nptr == '+') && *nptr++ == '-')
		sign = -1;
	while (*nptr >= '0' && *nptr <= '9')
	{
		f = f * 10 + (*nptr - '0');
		res = res * 10 + (*nptr++ - '0');
	}
	if (f > 1.8e19 || res > (unsigned long)9223372036854775807 + (sign == -1))
	{
		if (sign == 1)
			return (-1);
		return (0);
	}
	return ((int)(res * sign));
}

// int main (){

// printf("%d\n",ft_atoi("-8223372036854775808"));
// printf("%d\n",atoi("-8223372036854775808"));
// }

// if (count > 19)
// {
// 	if (sign == 1 && result / 10 != pre)
// 		return (-1);
// 	if (sign == -1 && result / 10 != pre)
// 		return (0);
// 	pre = result;
// }