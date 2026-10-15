/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrabba <herrabba@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:02:21 by herrabba          #+#    #+#             */
/*   Updated: 2026/10/15 14:02:23 by herrabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

// overflow
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	max;

	max = size * nmemb;
	if (nmemb && (max / nmemb) != size)
	{
		return (NULL);
	}
	arr = (void *)malloc(size * nmemb);
	if (!arr)
		return (NULL);
	ft_bzero(arr, size * nmemb);
	return ((void *)arr);
}
