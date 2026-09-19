//this library fill a block of memory by a byte
#include "includes/libft.h"
void			*ft_memset(void *s, int c, size_t n){
    while(n--)
       ((ign_char *)s)[n]= c;
 return s;
}


#include <stdio.h>
int main(){
    char str[]="hello world";
  char *res=  ft_memset(str,'A',11);
    printf("%s\n",res);
    return 0;
}