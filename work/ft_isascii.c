/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 04:31:22 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/30 04:35:25 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isascii(int c) {
  if(c >= 0 && c <= 127)
    return 1;
  return 0;
}

int main() {
    printf("A : %d\n", ft_isascii('A'));
    printf("128 : %d\n", ft_isascii(128));
    return 0;
}