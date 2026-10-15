#include "includes/libft.h"
void ft_lstiter(t_list *lst, void (*f)(void *)){
    if(!lst || !f){
        return ;
    }
    t_list *current = lst;
    while(current){
        f(current->content);
        current=current->next;
    }

}



// #include <stdio.h>
// int main(){
//     unsigned int test;
//     test=4294967295 * 4;
//     printf("%u\n",test);
// }