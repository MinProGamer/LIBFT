#include <unistd.h>

int	ft_isalpha(int c){
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' )
		return 1;
	return (0);
}

int		main(void){
	if (isalpha('a'))
		write(1,"y",1);
	return (1);
}