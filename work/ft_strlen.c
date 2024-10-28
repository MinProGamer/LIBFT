/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:32:05 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/28 16:32:06 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s)
{
	size_t i;
	i = 0;

	while(s[i] != '\0')
	{
		i++;
	}
	return i;
}

int main(void)
{
	char str[] = "1337";
	printf("%lu\n",ft_strlen(str));
	printf("%lu",strlen(str));
	return 1;
}
