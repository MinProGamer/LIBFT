#include <unistd.h>

int ft_isprint(int c) {
    return (c >= 32 && c <= 126);
}

int main(void)
{
    if (ft_isprint('A'))
        write(1, "Y", 1);
    else
        write(1, "N", 1);
    return 0;
}