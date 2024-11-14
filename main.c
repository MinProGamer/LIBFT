
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

void add(char **p){
    *p = "MinPro";
}

int main(void)
{
    int fd = open("data.txt",O_WRONLY | O_CREAT | O_TRUNC,0777);

    char *str = "\nSALAM";

    add(&str);

    int len = strlen(str);

    write(fd,str,len);

    close(fd);
}
