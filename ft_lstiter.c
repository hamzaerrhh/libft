/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrabba <herrabba@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:03:41 by herrabba          #+#    #+#             */
/*   Updated: 2026/10/15 14:03:43 by herrabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!lst || !f)
	{
		return ;
	}
	current = lst;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
}

// #include <stdio.h>
// int main(){
//     unsigned int test;
//     test=4294967295 * 4;
//     printf("%u\n",test);
// }