//this library fill a block of memory by a byte
#include "includes/libft.h"
void			*ft_memset(void *s, int c, size_t n){
    while(n--)
       ((unsigned char *)s)[n]= c;
 return s;
}







// //42 -> -1337
// int main(void)
// {
//     char  test[]= "hello";
    
//     ft_memset(&test[2], '\0', 1);
//     ft_memset(&test[1], 'i', 1);
//     //   ft_memset(&test, 0, 3);



//     printf("%s\n", test);


//     return 0;
// }
