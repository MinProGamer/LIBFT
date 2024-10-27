#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *des , const char *src){

    if (des == NULL) return NULL;

    int i = 0;

    while (src[i] != '\0') {
        des[i] = src[i];
        i++;
    }

    des[i] = '\0';
    return des;
}

int main(void)
{
    char src[]= "1337";

    char des[50];

    char *r = ft_strcpy(des,src);

    printf("src : %s \n",src);
    printf("des : %s \n",r);
    
    return (0);
}
