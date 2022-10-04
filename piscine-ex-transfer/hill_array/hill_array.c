#include <stddef.h>
int top_of_the_hill(int tab[], size_t len)
{
    if (tab == NULL)
    {
        return -1;
    }
    else
    {
        int index = 0;
        for (size_t i = len - 1; i > 0; i--)
        {
            if (tab[i] < 0)
            {
                return -1;
            }
            else if (tab[i - 1] < tab[i] && index == 0)
            {
                index = i;
            }
            else if (tab[i - 1] > tab[i] && index != 0)
            {
                return -1;
            }
            else
            {
                continue;
            }
        }
        return index;
    }
}