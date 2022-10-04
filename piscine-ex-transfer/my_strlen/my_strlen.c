#include <stddef.h>
size_t my_strlen(const char *str)
{
    if (!str)
        return 0;
    size_t k = 0;
    while (str[k] != '\0')
        ++k;
    return k;
}