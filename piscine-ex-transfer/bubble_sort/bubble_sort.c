#include <stddef.h>
void swap(int ar[], size_t pos1, size_t pos2)
{
    int temp = ar[pos1];
    ar[pos1] = ar[pos2];
    ar[pos2] = temp;
}
void bubble_sort(int array[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            if (array[j] > array[i])
            {
                swap(array, i, j);
            }
        }
    }
}