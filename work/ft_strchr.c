/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:09:46 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/28 05:57:28 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
  while (*s) {
    if (*s == c) return (char *)s;
    s++;
  }

  if (*s == c)
    return (char *)s;
    
  return NULL;
}

int main(int argc, char const *argv[])
{
  char str[] = " test @minpro";

  char *p;
  char *d;
  
  p = ft_strchr(str,'@');
  d = strchr(str,'\0');
  
  printf("%c\n",p[0]);
  printf("%c",d[0]);

  return 0;
}
