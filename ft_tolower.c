#include <unistd.h>

int ft_tolower(int c) {
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}

int main(void)
{
    char r = ft_tolower('C');
    write(1, &r, 1);
    return 0;
}



