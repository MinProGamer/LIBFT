/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:10:06 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/28 01:10:07 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalpha(int c)
{
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z' || (unsigned char)c >= 'A' && (unsigned char)c <= 'Z' )
		return (1);
	return (0);
}

int		main(void){
	if (ft_isalpha('a'))
		write(1, "y", 1);
	return (1);
}