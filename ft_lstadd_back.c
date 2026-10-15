#include "includes/libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    if (!lst || !new)
        return;
    if (*lst == NULL)
    {
        *lst = new;
        return;
    }
    last = ft_lstlast(*lst);
    last->next = new;
}

// int main(void)
// {
//     int a = 10;
//     int b = 4;

//     t_list *node1 = ft_lstnew(&a);
//     t_list *node2 = ft_lstnew(&b);

//     ft_lstadd_back(&node1, node2);

//     t_list *current = node1;
//     while (current)
//     {
//         printf("%d\n", *(int *)current->content);
//         current = current->next;
//     }

//     free(node2);
//     free(node1);

//     return (0);
// }