/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrabba <herrabba@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:06:46 by herrabba          #+#    #+#             */
/*   Updated: 2026/10/22 17:09:04 by herrabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// it take len amount starting from the start index
#include "libft.h"

static char	*fail_start(void)
{
	char	*array;

	array = (char *)malloc(sizeof(char) * 1);
	if (!array)
		return (NULL);
	array[0] = '\0';
	return (array);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*array;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start >= size)
		return (fail_start());
	if (len > size - start)
		len = size - start;
	array = (char *)malloc(sizeof(char) * (len + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (i < len)
	{
		array[i] = s[start + i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
