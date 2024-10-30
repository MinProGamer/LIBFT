/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 02:00:06 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/30 02:32:49 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len) {
    unsigned char *b2 = (unsigned char *)b;
    
    while (len--) {
        *b2 = (unsigned char)c;
        b2++;
    }
    return b;
}

int main(int argc, char const *argv[])
{
  char text[11];
  printf("%s",ft_memset(text,'a',sizeof(char) * 10));
  return 0;
}
