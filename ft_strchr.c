/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:09:46 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/28 01:09:47 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *str, int c){
  while (*str != '\0') {
      if (*str == c) return (char *)str;
      str++;
  }
  return NULL;
}

int main(int argc, char const *argv[])
{
  char str[] = "test @minpro";

  char *locate = ft_strchr(str,'@');
  printf("%s",locate);
  return 0;
}
