/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 05:22:54 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/30 21:43:21 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = 0;
}

int	main(void)
{
	char	buffer[9] = {'1','2','3', '4', '5', '6', '7', '8', '9'};
	printf("before : ");
	for	(int i = 0; i < 9; i++){
		printf("%c ", buffer[i]);
	}
	printf("\n");
	ft_bzero(buffer, 2);
	printf("after : ");
	for (int i = 0; i < 9; i++) {
		printf("%c ", buffer[i]);
	}
	return (0);
}
