#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
    int fd = open("example.txt", O_WRONLY | O_CREAT, 0644);  // فتح أو إنشاء الملف

    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    const char *text = "Hello, File Descriptors!";
    write(fd, text, 23);

    close(fd);
    return 0;
}
