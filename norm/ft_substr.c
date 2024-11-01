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

#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = 0;
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	l;
	void	*p;

	l = count * size;
	p = malloc(l);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, l);
	return (p);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

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

int	main(void)
{
	int		len;
	int		start;
	char	*s;
	char	*str;

	len = 6;
	start = 3;
	s = "MinPro";
	str = ft_substr(s, start, len);
	printf("%s", str);
	return (0);
}
