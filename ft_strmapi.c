/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrabba <herrabba@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:06:07 by herrabba          #+#    #+#             */
/*   Updated: 2026/10/15 14:06:09 by herrabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	count;
	char			*copy;

	count = ft_strlen(s);
	copy = malloc(count + 1 * sizeof(char));
	i = 0;
	while (s[i])
	{
		copy[i] = f(i, s[i]);
		i++;
	}
	return (copy);
}

// char shift_char(unsigned int i, char c)
// {
//     return (c + 4);
// }

// int main(){
//     char str[]="hello abc";
//   printf("%s\n",ft_strmapi(str,shift_char));
// return (0);

// }