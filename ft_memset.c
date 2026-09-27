//this library fill a block of memory by a byte
#include "includes/libft.h"
void			*ft_memset(void *s, int c, size_t n){
    while(n--)
       ((ign_char *)s)[n]= c;
 return s;
}

// int main(void)
// {
//     char str[] = "hello world";

//     ft_memset(str, 'A', 11);
//     printf("%s\n", str);

//     int x = 1337;

//     ft_memset(&x, 42, 4);
//     printf("%d\n", x);

//     return 0;
// }
