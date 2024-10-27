
#include <unistd.h>

int ft_isalnum(int c) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return 1;
    return 0;
}

int main(void)
{
    if (isalnum('A'))
        write(1, "Y", 1);
    else
        write(1, "N", 1);
    return 0;
}
