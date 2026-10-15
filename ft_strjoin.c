/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrabba <herrabba@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:05:42 by herrabba          #+#    #+#             */
/*   Updated: 2026/10/15 16:31:10 by herrabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	i;
	size_t	j;
	char	*arr;

	if (s1 && s2)
	{
		size = ft_strlen(s1) + ft_strlen(s2);
		arr = (char *)malloc(sizeof(char) * (size + 1));
		if (!arr)
			return (NULL);
		i = 0;
		j = -1;
		while (s1[++j])
			arr[i++] = s1[j];
		j = -1;
		while (s2[++j])
			arr[i++] = s2[j];
		arr[i] = '\0';
		return (arr);
	}
	return (NULL);
}
