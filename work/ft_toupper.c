#include <stdio.h>

int	ft_toupper(int c)
{
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	char	r;
	r =	ft_toupper('a');
	printf("%c", r);
	return (0);
}
