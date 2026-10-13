/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrabba <herrabba@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 11:42:12 by herrabba          #+#    #+#             */
/*   Updated: 2026/10/12 17:37:12 by herrabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

       char *ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*copy;

	len = ft_strlen(s);
	copy = malloc((len + 1) * sizeof(char));
	if (copy == 0)
		return (0);
	i = 0;
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
