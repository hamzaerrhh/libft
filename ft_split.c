/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herrabba <herrabba@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:05:17 by herrabba          #+#    #+#             */
/*   Updated: 2026/10/15 16:28:59 by herrabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

static void	free_words(char **result, int i)
{
	while (i > 0)
		free(result[--i]);
	free(result);
}

static int	fill_words(char **result, char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			result[i] = get_word(s, c);
			if (!result[i])
				return (free_words(result, i), 0);
			i++;
			s += ft_strlen(result[i - 1]);
		}
	}
	result[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	if (!fill_words(result, s, c))
		return (NULL);
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