/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:08:16 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/30 03:52:31 by zajaddou         ###   ########.fr       */
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

int main(int argc, char const *argv[])
{
  char src[] = "minpro";
  char dst[50];
  printf("c:%s\n",ft_memcpy(dst,src,strlen(src)+1));
  printf("o:%s",memcpy(dst,src,strlen(src)+1));
  return 0;
}

