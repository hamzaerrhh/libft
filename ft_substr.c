/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrabba <herrabba@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:06:46 by herrabba          #+#    #+#             */
/*   Updated: 2026/10/15 14:06:48 by herrabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// it take len amount starting from the start index
#include "includes/libft.h"

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
	char	*dst;

	i = 0;
	dst = (char *)s;
	if (!dst)
		return (NULL);
	size = ft_strlen(dst);
	if (size < start)
		return (fail_start());
	array = (char *)malloc(sizeof(char) * (len + 1));
	if (!array)
		return (NULL);
	while (i < len)
	{
		array[i] = s[start + i];
		i++;
	}
	array[i] = '\0';
	return (array);
}

// int main(void)
// {
//     char *result = ft_substr("Hello World", 10, 5);

//     printf("%s\n", result);
//     free(result);
//     return (0);
// }