/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrabba <herrabba@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:03:22 by herrabba          #+#    #+#             */
/*   Updated: 2026/10/15 14:03:24 by herrabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
// int main(void)
// {
//     int a = 10;
//     int b = 4;

//     t_list *node1 = ft_lstnew(&a);
//     t_list *node2 = ft_lstnew(&b);

//     ft_lstadd_front(&node1, node2);

//     t_list *current = node2;
//     while (current)
//     {
//         printf("%d\n", *(int *)current->content);
//         current = current->next;
//     }

//     free(node2);
//     free(node1);

//     return (0);
// }