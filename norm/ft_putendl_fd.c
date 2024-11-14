/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 08:00:54 by zajaddou          #+#    #+#             */
/*   Updated: 2024/11/14 06:04:21 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	if (fd < 0)
	{
		write(2, "-1", 2);
		return ;
	}
	i = 0;
	while (s[i])
		ft_putchar_fd(s[i++], fd);
	ft_putchar_fd('\n', fd);
}
