#include <stddef.h>
char *my_strcpy(char *dest, const char *source)
{
    if (dest == NULL)
    {
        return NULL;
    }
    char *result = dest;

    while (*source != '\0')
    {
        *dest = *source;
        dest++;
        source++;
    }
    *dest = '\0';

    return ptr;
}