#include <unistd.h>

int ft_isdigit(int c){
  if (c >= '0' && c <= '9')
    return 1;
  return 0;
}

int main(void)
{
  if (ft_isdigit('1'))
    write(1,"y",1);
  return 0;
}
