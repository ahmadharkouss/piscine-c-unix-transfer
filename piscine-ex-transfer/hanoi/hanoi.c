#include <stdio.h>
void _rectowerOfHanoi(int n, char from, char to, char by)
{
    if (n == 1)
    {
        printf("%c->%c\n", from, to);
        return;
    }
    _rectowerOfHanoi(n - 1, from, by, to);
    printf("%c->%c\n", from, to);
    _rectowerOfHanoi(n - 1, by, to, from);
}

void hanoi(unsigned n)
{
    _rectowerOfHanoi(n, '1', '3', '2');
}
