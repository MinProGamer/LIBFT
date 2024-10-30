/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 03:56:08 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/30 04:27:39 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n){
  unsigned char *d = (unsigned char *)dst;
  unsigned char *s = (unsigned char *)src;
  
  if (dst == NULL)
      return NULL;

  while (n--)
    *d++ = *s++;
  
  return dst;
}

void *ft_memmove(void *dst, const void *src, size_t len) {
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;

    if (dst == src || len == 0)
        return dst;
  
    if (d > s) {
      while (len--) {
        d[len] = s[len];
      }
    } else {
        ft_memcpy(d, s, len);
    }

    return dst;
}

int main(int argc, char const *argv[])
{
  char src[] = "minprox";
  char dst[] = "minproc";

  printf("c:%s\n",ft_memmove(dst,src,strlen(src)+1));
  printf("o:%s",memmove(dst,src,strlen(src)+1));
  
  return 0;
}
