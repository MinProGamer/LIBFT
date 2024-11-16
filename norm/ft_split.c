/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 06:13:31 by zajaddou          #+#    #+#             */
/*   Updated: 2024/11/16 17:37:07 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	**free_array(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (0);
}

static char	*ft_print_strings(char *str, const char *s, int j, int word_len)
{
	int	i;

	i = 0;
	while (word_len > 0)
	{
		str[i] = s[j - word_len];
		i++;
		word_len--;
	}
	str[i] = '\0';
	return (str);
}

static char	**ft_split_string(char const *s, char c, char **s1, int c_words)
{
	int	j;
	int	word;
	int	word_len;

	j = 0;
	word = 0;
	word_len = 0;
	while (word < c_words)
	{
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
		{
			j++;
			word_len++;
		}
		s1[word] = (char *)malloc((word_len + 1) * sizeof(char));
		if (!s1[word])
			return (free_array(s1, word));
		ft_print_strings(s1[word], s, j, word_len);
		word_len = 0;
		word++;
	}
	s1[word] = NULL;
	return (s1);
}

char	**ft_split(char const *s, char c)
{
	char			**s1;
	unsigned int	c_words;

	if (!s)
		return (NULL);
	c_words = ft_count_words(s, c);
	s1 = (char **)malloc((c_words + 1) * sizeof(char *));
	if (!s1)
		return (NULL);
	s1 = ft_split_string(s, c, s1, c_words);
	return (s1);
}
