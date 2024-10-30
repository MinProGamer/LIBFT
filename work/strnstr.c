#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n){
  
  while ((*s1 == *s2) && *s1 && --n)
    s1++, s2++;
  
  return (*s1 - *s2);
}

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t needle_len = 0;
    size_t i = 0;

    while (needle[needle_len] != '\0')
        needle_len++;

    if (needle_len == 0)
        return (char *)haystack;

    while (haystack[i] && i < len)
    {
        if ( i + needle_len <= len )
          if( ft_strncmp( &haystack[i], needle, needle_len) == 0)
            return (char *)&haystack[i];
            
        i++;
    }

    return NULL;
}

int main() {
    const char *haystack = "ABCD";
    const char *needle = "C";

    char *result = ft_strnstr(haystack, needle, 4);
    printf("%s", result);

    return 0;
}