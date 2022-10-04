#include <stdio.h>
int binary_search(const int vec[], int size, int elt)
{
    int mid = 0;
    int right = size - 1;
    int left = 0;
    if (size == 0)
    {
        return -1;
    }
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (vec[mid] == elt)
        {
            return mid;
        }
        else if (right - left <= 1)
        {
            return -1;
        }
        else if (elt < vec[mid])
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}
