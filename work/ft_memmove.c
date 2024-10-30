/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 03:56:08 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/30 23:36:24 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *)dst;
	d = (unsigned char *)src;
	if (dst == NULL)
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*s;
	unsigned char		*d;

	s = (const unsigned char *)src;
	d = (unsigned char *)dst;
	if (dst == src || len == 0)
		return (dst);
	if (d > s)
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	else
	{
		ft_memcpy(d, s, len);
	}
	return (dst);
}

int	main(int argc, char const *argv[])
{
	char	src[] = "minprox";
	char	dst[] = "minproc";
	printf("c : %s\n",ft_memmove(dst,src,strlen(src)+1));
	printf("o : %s",memmove(dst,src,strlen(src)+1));
	return (0);
}
