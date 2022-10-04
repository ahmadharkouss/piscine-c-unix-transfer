#include <stdio.h>
int my_round(float n)
{
    int r;
    if (n - (int)n >= 0.50f && n - (int)n <= 0.99f)
    {
        r = ++n;
    }
    if (n - (int)n <= -0.50f && n - (int)n >= -0.99f)
    {
        r = --n;
    }
    else
    {
        r = n;
    }
    return r;
}