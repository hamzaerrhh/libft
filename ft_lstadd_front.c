#include "includes/libft.h"
void ft_lstadd_front(t_list **lst, t_list *new){
    if(new==NULL){
        return ;
    }

}

int main(){
    int a=10;
    int  b= 4;
  t_list  node1=ft_lstnew(&a);
   t_list node2=ft_lstnew(&b);
ft_lstadd_front(&node1,node2);


}