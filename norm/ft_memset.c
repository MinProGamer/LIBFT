/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 02:00:06 by zajaddou          #+#    #+#             */
/*   Updated: 2024/11/08 17:58:18 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct ali
{
	int a;
	char b;
	short c;
	int x;
	long z;
	long d;
	//32
}ali;
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b2;

	b2 = (unsigned char *)b;
	while (len--)
	{
		*b2 = (unsigned char)c;
		b2++;
	}
	return (b);
}
//01100001 01101100 01101001
int main(void)
{
	ali u;
	//-1337  u->c
	//2005   u->d
	// 00000111 11010101
	//ali  u->z
	// 11111111 11111111 11111010 11000111
	//9   17
	ft_memset(&u, 0, 32);
	ft_memset(&u, 97, 19);
	ft_memset(&u, 108, 18);
	ft_memset(&u, 105, 17);
	printf("%ld", u.z);

}