/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:04:53 by abfilali          #+#    #+#             */
/*   Updated: 2025/04/30 14:52:51 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*fill_new(char const *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_all(char **arr, int j)
{
	while (--j >= 0)
		free(arr[j]);
	free(arr);
}

static int	fill_array(char **new, char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			new[j] = fill_new(&s[i], c);
			if (!new[j])
			{
				free_all(new, j);
				return (0);
			}
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	new[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**new;

	if (!s)
		return (NULL);
	new = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!new)
		return (NULL);
	if (!fill_array(new, s, c))
		return (NULL);
	return (new);
}
