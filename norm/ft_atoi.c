/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:57:15 by zajaddou          #+#    #+#             */
/*   Updated: 2024/10/30 23:29:36 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static void _set_(long *result, int *sign)
{
	*result = 0;
	*sign = 1;
}

int	ft_atoi(const char *str)
{
	long result;
	int	sign;
	long before;
 
	_set_(&result, &sign);
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
			if(sign == -1)
				return (0);
			return (-1);
		}                               
		str++;
	}
	return (sign * result);
}

int	main(void)
{
	int	i;

	char *s = "\n-214748364921474839948";

	i = ft_atoi(s);
	printf("mine   : %d\n", i);

	i = atoi(s);
	printf("origin : %d\n", i);
}
