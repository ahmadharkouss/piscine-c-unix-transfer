#include <stdio.h>

int int_palindrome(int n)
{
    int init = n;
    if (n < 0)
    {
        return 0;
    }
    int pali = 0;
    while (n >= 1)
    {
        pali = pali * 10;
        pali += n % 10;
        n = n / 10;
    }
    if (pali == init)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
