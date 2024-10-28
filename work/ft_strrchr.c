/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:09:46 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/28 06:15:22 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    const char *last = NULL;

    while (*s != '\0') {
        if (*s == c)
            last = s;
        s++;
    }

    return (char *)last;
}

int main(int argc, char const *argv[])
{
  char str[] = "@test @minpro";

  printf("%s\n",ft_strrchr(str,'@'));
  printf("%s",strrchr(str,'@'));
  return 0;
}
