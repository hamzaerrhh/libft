/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrabba <herrabba@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:06:39 by herrabba          #+#    #+#             */
/*   Updated: 2026/10/17 16:45:10 by herrabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isc_in_str(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	size_t	start;
	size_t	end;
	char	*result;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_isc_in_str(s2, s1[start]))
		start++;
	while (end > start && ft_isc_in_str(s2, s1[end - 1]))
		end--;
	result = malloc(sizeof(char) * (end - start + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (start < end)
		result[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}
