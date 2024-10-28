/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:57:15 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/28 20:57:16 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int ft_atoi(const char *str) {

    int result = 0;
    int sign = 1;
    int i = 0;

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
      i++;
    
    if(str[i] == '-' || str[i] == '+' ){
      if (str[i] == '-') 
        sign = -1;
      i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10;
        result += str[i] - '0';
        i++;
    }

    return sign * result;
}

int main() {
    printf("%d",ft_atoi("    +200"));
    return 0;
}
