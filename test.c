/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:09:51 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/28 01:09:52 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main() {
    char str[10];

    memset(str, -1, sizeof(char) * 9);  // Fill only the first 9 bytes
    str[9] = '\0';                      // Add a null terminator

    printf("%s\n", str);                // Prints an empty string or may display non-printable characters
    return 0;
}
