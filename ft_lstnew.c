#include "includes/libft.h"

t_list *ft_lstnew(void *content){
t_list *new;
new=malloc(sizeof(t_list));
 if (!new)
        return (NULL);
new->content=content;
new->next=NULL;
return new;
}


// int main(){
// char test[] ="hello";
// t_list *new=ft_lstnew(test);
// printf("%s\n",(char *)new->content);
// }