#include <stdlib.h>
void *my_calloc(size_t size, size_t n)
{
    size_t t = n * size;
    int *arr = malloc(t);
    if (arr != NULL)
        for (size_t i; i < n; ++i)
            arr[i] = 0;
    return (arr);
}