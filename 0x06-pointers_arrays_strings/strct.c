#include <string.h>
char *_strcat(char *dest, char *src)
{
    char *p = dest + strlen(dest);
    while (*src != '\0') {
        *p++ = *src++;
    }
    *p = '\0';
    return dest;
}

