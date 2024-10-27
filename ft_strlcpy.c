#include <stddef.h>
#include <string.h>
#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size) {
    size_t i = 0;
    size_t src_len = 0;

    while (src[src_len] != '\0') {
        src_len++;
    }

    if (size > 0) {
        while (i < size - 1 && src[i] != '\0') {
            dst[i] = src[i];
            i++;
        }

        dst[i] = '\0';
    }

    return src_len;
}

int main(void)
{
    char src[]= "1337";

    char des[50];

    ft_strlcpy(des,src,5);

    printf("src : %s \n",src);
    printf("des : %s \n",des);
    
    return (0);
}
