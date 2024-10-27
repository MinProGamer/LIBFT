#include <unistd.h>

int ft_toupper(int c) {
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

int main(void)
{
    char r = ft_toupper('c');
    write(1, &r, 1);
    return 0;
}
