/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:20:02 by zajaddou          #+#    #+#             */
/*   Updated: 2024/11/09 23:46:12 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
  size_t i;
  char *result;
  
  i = 0;
  while (s[i++])
  {
    result[i] = f(,s[i])
  }
  return NULL
}

int main(void) {


    printf("%d",p(1));

    return 0;
}
