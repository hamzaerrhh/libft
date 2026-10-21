/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrabba <herrabba@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:03:47 by herrabba          #+#    #+#             */
/*   Updated: 2026/10/20 21:03:28 by herrabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;
	if (!lst){
		return NULL;
	}

	tmp = lst;
	while (lst->next)
	{
		lst = lst->next;
		tmp = lst;
	}
	return (tmp);
}
