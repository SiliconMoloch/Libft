/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:08:04 by yabokhar          #+#    #+#             */
/*   Updated: 2025/01/29 16:12:55 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_split(const char *s, char c);
static size_t	count_words(const char *str, char c);
static char		*loading_word(char const *s, char c);
static char		**fill_array(char const *s, char c, char **array);
static void		release_memory(char **array);

char	**ft_split(const char *s, char c)

{
	size_t	size;
	char	**array;

	if (!s)
		return (NULL);
	size = count_words(s, c);
	array = ft_calloc((size + 1), sizeof(char *));
	if (!array)
		return (NULL);
	array = fill_array(s, c, array);
	return (array);
}

static size_t	count_words(const char *str, char c)

{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (i == 0 || str[i - 1] == c)
		{
			if (str[i] != c)
				count++;
		}
		i++;
	}
	return (count);
}

static char	*loading_word(char const *s, char c)

{
	size_t	i;
	size_t	size;
	char	*word;

	size = 0;
	while (s[size] && s[size] != c)
		size++;
	word = malloc(sizeof(char) * (size + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < size)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**fill_array(char const *s, char c, char **array)

{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			array[j] = loading_word(&s[i], c);
			if (!array[j])
			{
				release_memory(array);
				return (NULL);
			}
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	array[j] = NULL;
	return (array);
}

static void	release_memory(char **array)

{
	size_t	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}
