/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:57:44 by zajaddou          #+#    #+#             */
/*   Updated: 2024/11/18 07:51:43 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	l;
	size_t	total_size;
	void	*p;

	l = 0;
	total_size = 0;
	total_size = count * size;
	if (count != 0 && total_size / count != size)
		return (NULL);
	l = count * size;
	p = malloc(l);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, l);
	return (p);
}
