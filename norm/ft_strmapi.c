/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:20:02 by zajaddou          #+#    #+#             */
/*   Updated: 2024/11/10 15:52:51 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_toupperi(unsigned int i, char c)
{
	(void)i;
	return (char)ft_toupper(c);
}
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*result;
	
	if (!s || !f)
		return (NULL);
	printf("fdsg");
	len = ft_strlen(s);
	result = malloc((len + 1) * sizeof(char));
	printf("ewaaa");
	if (!result)
		return (NULL);
	i = 0;
	printf("fdfsfssss");
	while (s[i]){
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

int	main(void)
{
	const char *p = "hello";
	char *result = ft_strmapi(p, ft_toupperi);
	if (result)
	{
		printf("Original: %s\n", p);
		printf("Modified: %s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
