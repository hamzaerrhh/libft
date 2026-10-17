/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrabba <herrabba@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:06:07 by herrabba          #+#    #+#             */
/*   Updated: 2026/10/17 16:44:42 by herrabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
