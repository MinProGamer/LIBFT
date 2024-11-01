/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:57:44 by zajaddou          #+#    #+#             */
/*   Updated: 2024/11/01 22:13:26 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
