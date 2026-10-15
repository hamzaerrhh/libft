#include "includes/libft.h"
t_list *ft_lstlast(t_list *lst){
t_list *tmp;
tmp=lst;
while(lst->next){
lst=lst->next;
    tmp=lst;
}
return tmp;

}

// int main(void)
// {
//     int a = 10;
//     int b = 4;
//     int c= 45454;
//     t_list *node1 = ft_lstnew(&a);
//     t_list *node2 = ft_lstnew(&b);
//     t_list *node3 = ft_lstnew(&c);

// node1->next=node2;
// node2->next=node3;
// printf("%d\n",*(int *)ft_lstlast(node3)->content);


// free(node2);
// free(node1);
// free(node3);
//     return (0);
// }