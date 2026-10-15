#include "includes/libft.h"

// overflow
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t 	max;

	
	max = size * nmemb;
	if( nmemb && (max / nmemb )!= size){
			return NULL;
	}

	arr = (void *)malloc(size * nmemb);
	if (!arr)
		return (NULL);
	ft_bzero(arr, size * nmemb);
	return ((void *)arr);
}



