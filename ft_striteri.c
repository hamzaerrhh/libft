#include "includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void shift_char(unsigned int i, char *c)
// {
//     *c+=1;
// }

// int main(){
//     char str[]="hello abc";
//   printf("%s\n",str);

//     ft_striteri(str,shift_char);
//   printf("%s\n",str);
// return (0);

// }