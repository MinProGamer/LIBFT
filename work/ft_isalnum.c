/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:10:03 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/28 01:10:04 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalnum(	int c)	{
	if(((unsigned char)c >= 'A' && (unsigned char)c <= 'Z') || ((unsigned char)c >= 'a' && (unsigned char)c <= 'z') || ((unsigned char)c >= '0' && (unsigned char)c <= '9'))
		return (1);
	return (0);
}

int	main(void)
{
	if (ft_isalnum('A'))
		write(1, "Y", 1);
	else
		write(1, "N", 1);
	return (0);
}
