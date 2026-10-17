/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrabba <herrabba@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:03:35 by herrabba          #+#    #+#             */
/*   Updated: 2026/10/17 16:42:18 by herrabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// delete the node it self
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
