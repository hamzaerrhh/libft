#include "includes/libft.h"
void ft_lstclear(t_list **lst, void (*del)(void *)){
    t_list *current = *lst;
    t_list *next;;
    
    if (!lst || !del)
         return;

    while(current){
        next =current->next;
          ft_lstdelone(current,del);
          current=next;
    }
    *lst=NULL;
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