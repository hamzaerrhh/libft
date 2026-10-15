/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrabba <herrabba@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:00:18 by herrabba          #+#    #+#             */
/*   Updated: 2026/10/15 14:02:17 by herrabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <stdio.h>
//        struct list {
//               int  count;
//               int  c;
//               struct list *next;
//        } ;
//        int main()
//        {
//               struct list he;
//               he.count = 10;
//               he.c = 'c';
//               he.next = NULL;
//               printf("%d\n",sizeof(he));
//        }
// int main(void)
// {
//     char str[] = "Hello World";

//     printf("Before: %s\n", str);

//     ft_bzero(str, 5);

//     printf("After:  %s\n", str);

//     for (int i = 0; i < 11; i++)
//         printf("%d ", (unsigned char)str[i]);
//     printf("\n");

//     return (0);
// }