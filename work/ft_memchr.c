/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 05:22:54 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/30 05:36:07 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n) {
    const unsigned char *ptr = (const unsigned char *)s;

    while (n--) {
        if (*ptr == (unsigned char)c) 
            return (void *)ptr;
        ptr++;
    }
    
    return NULL;
}

int main() {
    const char str[] = "MinPro";
    char ch = 'P';
    size_t n = sizeof(str);
    printf("%s",ft_memchr(str, ch, n));
    return 0;
}