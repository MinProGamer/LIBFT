/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 05:22:54 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/31 23:11:50 by zajaddou         ###   ########.fr       */
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
	char	buffer[9];
	size_t	i;

	buffer[0] = '1';
	buffer[1] = '2';
	buffer[2] = '3';
	printf("before : ");
	i = 0;
	while (i < 3)
	{
		printf("%c ", buffer[i]);
		i++;
	}
	printf("\n");
	ft_bzero(buffer, 3);
	printf("after : ");
	i = 0;
	while (i < 3)
	{
		printf("%c ", buffer[i]);
		i++;
	}
	printf("\n");
	return (0);
}
