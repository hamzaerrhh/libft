/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrabba <herrabba@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:05:42 by herrabba          #+#    #+#             */
/*   Updated: 2026/10/23 11:31:27 by herrabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *set)
{
	size_t	size;
	size_t	i;
	size_t	j;
	char	*arr;

	if (s1 && set)
	{
		size = ft_strlen(s1) + ft_strlen(set);
		arr = (char *)malloc(sizeof(char) * (size + 1));
		if (!arr)
			return (NULL);
		i = 0;
		j = -1;
		while (s1[++j])
			arr[i++] = s1[j];
		j = -1;
		while (set[++j])
			arr[i++] = set[j];
		arr[i] = '\0';
		return (arr);
	}
	return (NULL);
}
