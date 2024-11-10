/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:31:49 by zajaddou          #+#    #+#             */
/*   Updated: 2024/11/09 16:56:06 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_chek(char *s1, char *s2)
{
	if (!s1)
		return (s2);
	return (s1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*result;
	size_t		len1;
	size_t		len2;

	if (!s1 && !s2)
		return (NULL);
	if (!s1 || !s2)
		return (ft_strdup(ft_chek((char *)s1, (char *)s2)));
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)malloc(len1 + len2 + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len1 + 1);
	ft_strlcat(result, s2, len1 + len2 + 1);
	return (result);
}
