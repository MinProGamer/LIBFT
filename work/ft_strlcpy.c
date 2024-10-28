/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 03:51:16 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/28 03:59:13 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

size_t ft_strlcpy(char * dst, const char * src, size_t dstsize) {
	size_t	i;
	size_t src_len;

	i = 0;
	src_len = 0;

	while (src[src_len] != '\0')
	{
		src_len++;
	}

	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i] != '\0') {
			dst[i] = src[i];
			i++;
		}

		dst[i] = '\0';
	}
	return src_len;
}

int main(void)
{
	char src[]= "1337";

	char des[50];

	ft_strlcpy(des,src,5);

	printf("src : %s \n",src);
	printf("des : %s \n",des);
	
	return (0);
}
