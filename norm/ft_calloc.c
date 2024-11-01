/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:57:44 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/31 22:46:25 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = 0;
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	l;
	void	*p;

	l = count * size;
	p = malloc(l);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, l);
	return (p);
}

int	main(void)
{
	size_t	count;
	size_t	size;
	int		*arr;
	size_t	i;

	count = 5;
	size = sizeof(int);
	arr = (int *)ft_calloc(count, size);
	if (arr == NULL)
		fprintf(stderr, "Memory allocation failed\n");
	i = 0;
	while (i < count)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
	return (0);
}
