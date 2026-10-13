#include "includes/libft.h"

char
	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char*)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char*)(s + i));
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// int main(){
//     char str[]="bonjour";
//     printf("%s\n",ft_strchr(str,'\0'));
//     printf("%s\n",strchr(str,'\0'));

// }