/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrabba <herrabba@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:02:21 by herrabba          #+#    #+#             */
/*   Updated: 2026/10/23 09:19:04 by herrabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// overflow
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	max;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	max = size * nmemb;
	if ((max / nmemb) != size)
	{
		return (NULL);
	}
	arr = (void *)malloc(size * nmemb);
	if (!arr)
		return (NULL);
	ft_bzero(arr, size * nmemb);
	return ((void *)arr);
}
