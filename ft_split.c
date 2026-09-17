/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabahmad <sabahmad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 12:23:19 by sabahmad          #+#    #+#             */
/*   Updated: 2026/09/12 13:03:09 by sabahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static int	isseparator(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

static int	count_words(char const *s, char c)
{
	int	counter;
	int	words;

	counter = 0;
	words = 0;
	while (s[counter])
	{
		while (s[counter] && isseparator(s[counter], c))
			counter++;
		if (s[counter])
			words++;
		while (s[counter] && !isseparator(s[counter], c))
			counter++;
	}
	return (words);
}

static char	*copy(char const *s, char c)
{
	size_t	len;
	size_t	i;
	char	*word;

	len = 0;
	while (s[len] && !isseparator(s[len], c))
		len++;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_arr(char **arr, int count)
{
	while (count > 0)
	{
		count--;
		free(arr[count]);
	}
	free(arr);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	int		words;
	int		i;
	int		index;

	words = count_words(s, c);
	arr = malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	i = 0;
	index = 0;
	while (i < words)
	{
		while (s[index] && isseparator(s[index], c))
			index++;
		arr[i] = copy(&s[index], c);
		if (!arr[i])
			return (free_arr(arr, i), NULL);
		i++;
		while (s[index] && !isseparator(s[index], c))
			index++;
	}
	arr[i] = NULL;
	return (arr);
}
