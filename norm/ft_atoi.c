/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:57:15 by zajaddou          #+#    #+#             */
/*   Updated: 2024/11/03 08:07:07 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	set(long *result, int *sign)
{
	*result = 0;
	*sign = 1;
}

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;
	long	before;

	set(&result, &sign);
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		before = result;
		result = (result * 10) + (*str - '0');
		if ((result / 10) != before)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
		str++;
	}
	return (sign * result);
}
