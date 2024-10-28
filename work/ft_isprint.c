/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:10:20 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/28 01:20:28 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h> 

int	ft_isprint(int c)
{
	return ((unsigned char)c >= 32 && (unsigned char)c <= 126);
}

int	main(void)
{
	int c = 'A';
	if (ft_isprint(c))
		write(1, "Y", 1);
	else
		write(1, "N", 1);

	write(1,"\n", 1);

	if (isprint(c))
		write(1, "Y", 1);
	else
		write(1, "N", 1);
		
	return (0);
}
