/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:57:15 by zajaddou          #+#    #+#             */
/*   Updated: 2024/11/19 06:09:28 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long int	rs;
	long int	rs2;

	sign = 1;
	rs = 0;
	while (*str != '\0' && ((*str >= 9 && *str <= 13) || (*str == 32)))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		rs2 = rs;
		rs = rs * 10 + (*str - '0');
		if (rs / 10 != rs2 && sign == 1)
			return (-1);
		if (rs / 10 != rs2 && sign == -1)
			return (0);
		str++;
	}
	return ((rs * sign));
}
