/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 01:15:40 by zajaddou          #+#    #+#             */
/*   Updated: 2024/11/12 00:29:08 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	result_len;
	char	*result;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *) s1);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = start;
	while (s1[end])
		end++;
	if (end == start)
		return ((char *)calloc(1, 1));
	end--;
	while (end > start && is_in_set(s1[end], set))
		end--;
	result_len = end - start + 1;
	result = (char *)malloc(result_len + 1);
	if (!result)
		return (NULL);
	ft_strlcpy (result, s1 + start, result_len + 1);
	return (result);
}
