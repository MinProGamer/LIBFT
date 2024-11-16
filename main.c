#include <stdio.h>
#include <string.h>

int main(void)
{
    int i = 1;
    memset((char *)&i,0b11111111,1);
    memset((char *)&i+1,0b11111111,1);

    printf("%d",i);

}
