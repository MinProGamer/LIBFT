#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char* str){
  int i;
  i = 0;

  while(str[i] != '\0')
  {
    i++;
  }
  return i;
}

int main(void)
{
  printf("[%d]",ft_strlen(NULL));
  printf("[%d]",strlen(NULL));
  return 1;
}
