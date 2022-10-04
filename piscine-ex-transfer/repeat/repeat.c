#include <stdio.h>
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        return 1;
    }
    else
    {
        int i = 1;
        int d = *argv[2] - 48;
        while (i <= d)
        {
            puts(argv[1]);
            i++;
        }
        return 0;
    }
}