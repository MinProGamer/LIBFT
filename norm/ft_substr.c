/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:46:23 by zajaddou          #+#    #+#             */
/*   Updated: 2024/11/01 19:46:23 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	ln;
	size_t	i;
	char	*sub;

	ln = ft_strlen(s);
	i = 0;
	sub = (char *)ft_calloc(len - start + 1, sizeof(char));
	if (sub == NULL)
		return (NULL);
	while (start < len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
