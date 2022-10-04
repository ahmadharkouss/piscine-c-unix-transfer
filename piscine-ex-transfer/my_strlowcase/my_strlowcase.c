#include <stddef.h>
void my_strlowcase(char *str)
{
    size_t k = 0;
    while (str[k] != '\0')
    {
        if ((str[k] <= 'Z') && (str[k] >= 'A'))
        {
            str[k] += 32;
        }
        k++;
    }
}