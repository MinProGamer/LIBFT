#include <stdio.h>

int	ft_tolower(int c)
{
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		return (c + 32);
	return (c);
}

int	main(void)
{
	char	r;
	r = ft_tolower('C');
	printf("%c", r);
	return (0);
}
