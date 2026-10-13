#include "includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *arr;

	arr = (void *)malloc(size * nmemb);
	if (!arr)
		return (NULL);
	ft_bzero(arr, size * nmemb);
	return ((void *)arr);
}