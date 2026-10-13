#include "includes/libft.h"


static int	count_words(char const *s, char c)
{
	int		count;
	size_t	len;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			len = ft_strlen(s);
			if (ft_memchr(s, c, len))
				len = (char *)ft_memchr(s, c, len) - s;
			s += len;
			count++;
		}
	}
	return (count);
}


static char	*get_word(char const *s, char c)
{
	size_t	len;
	char	*word;
	char	*delimiter;

	len = ft_strlen(s);
	delimiter = ft_memchr(s, c, len);
	if (delimiter)
		len = delimiter - s;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			result[i] = get_word(s, c);
			if (!result[i])
			{
				while (i > 0)
					free(result[--i]);
				free(result);
				return (NULL);
			}
			i++;
			s += ft_strlen(result[i - 1]);
		}
	}
	result[i] = NULL;
	return (result);
}


// int	main(void)
// {
// 	char	**words;
// 	int		i;

// 	words = ft_split("hello,,,world,,42", ',');
// 	if (!words)
// 		return (1);
// 	i = 0;
// 	while (words[i])
// 	{
// 		printf("%s\n", words[i]);
// 		free(words[i]);
// 		i++;
// 	}
// 	free(words);
// 	return (0);
// }