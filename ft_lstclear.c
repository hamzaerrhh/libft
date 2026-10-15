/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrabba <herrabba@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:03:29 by herrabba          #+#    #+#             */
/*   Updated: 2026/10/15 16:32:05 by herrabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	if (!lst || !del)
		return ;
	while (current)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}

// void del(void *content){
// free(content);
// }

// int main(){
//     int a =1;
//     int b =2;
//     int c =2;
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;
//    node1=ft_lstnew(&a);
//    node2=ft_lstnew(&b);
//    node3=ft_lstnew(&c);

//     node1->next=node2;
//     node2->next=node3;

// ft_lstclear(&node1,del);
// printf("%d\n",node1->content);
// }