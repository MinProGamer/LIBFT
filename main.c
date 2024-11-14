
#include <fcntl.h>
#include <unistd.h> 
#include <stdio.h> 

int main(int argc, char const *argv[])
{
    int fd = open("data.txt",O_WRONLY | O_CREAT,0777);

    write(fd,"MinPro",6);

    close(fd);
    
    return 1;
}
