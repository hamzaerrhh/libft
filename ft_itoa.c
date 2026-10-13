#include "includes/libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	len = count_digits(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
		nb = -nb;
	while (len > 0)
	{
		str[len - 1] = (nb % 10) + '0';
		nb /= 10;
		len--;
		if (nb == 0)
			break ;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

// int main(){
// printf("%s\n",itoa(-2147483648)); 
// }