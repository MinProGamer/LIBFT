/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 05:44:26 by zajaddou          #+#    #+#             */
/*   Updated: 2024/11/03 05:48:23 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	get_num_len(int n)
{
	int	len = (n <= 0) ? 1 : 0;

	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	nb;
	int		len;

	nb = n;
	len = get_num_len(nb);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	while (len-- > 0)
	{
		if (result[len] == '-')
			break;
		result[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (result);
}


int main(void)
{
  printf("",
  return 0;
}
