/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 03:51:16 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/30 23:36:49 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize) {
    size_t d_len = 0;
    size_t s_len = 0;
    size_t i = 0;

    while (dst[d_len] != '\0' && d_len < dstsize)
        d_len++;
				
    while (src[s_len] != '\0')
        s_len++;

    if (dstsize <= d_len)
        return dstsize + s_len;
    
    while (src[i] != '\0' && d_len + i < dstsize - 1) {
        dst[d_len + i] = src[i];
        i++;
    }
		
    dst[d_len + i] = '\0';

    return d_len + s_len;
}

int main(void) {
    char src[] = "1337";
    char des[12] = "School+";
    
    size_t result = ft_strlcat(des, src, sizeof(des));

    printf("Resulting des : %s\n", des); 
    printf("Total length : %zu\n", result);  
    return 0;
}