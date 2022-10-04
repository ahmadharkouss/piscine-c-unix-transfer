#include <stdio.h>
void display_square(int width)
{
    if (width <= 0)
    {
        return;
    }
    width = width % 2 == 0 ? width + 1 : width;

    int row = (width + 1) / 2;
    char arr[row][width];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == 0 || i == row - 1)
            {
                arr[i][j] = '*';
                putchar(arr[i][j]);
            }
            else if ((j == 0 || j == width - 1) && (i != 0 && i != row - 1))
            {
                arr[i][j] = '*';
                putchar(arr[i][j]);
            }
            else
            {
                arr[i][j] = ' ';
                putchar(arr[i][j]);
            }
        }
        putchar('\n');
    }
}
