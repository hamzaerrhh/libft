#include "includes/libft.h"
       void ft_bzero(void *s, size_t n){
        ft_memset(s, 0, n);
       }


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