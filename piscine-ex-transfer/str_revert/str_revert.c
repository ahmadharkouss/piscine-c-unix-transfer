#include <stddef.h>
void str_revert(char str[])
{
    size_t start = 0;
    while (str[start] != '\0')
    {
        ++start;
    }
    size_t end = start - 1;
    for (size_t j = 0; i < start / 2; j++)
    {
        int temp = str[end];
        str[end] = str[i];
        str[i] = temp;
        end--;
    }
}