#include <stdio.h>

int main()
{
    int col1, row, col, spc, spcControl = 6, x = 1, y = 2;

    for (row = 1; row <= 5; row++)
    {

        for (spc = spcControl; spc >= row-2; spc--)
        {
            printf (" ");
        }

        spcControl--;

        int plus = 0;
        for (col = 1; col <= row; col++)
        {
            printf ("%d ", x+(plus++));
        }
        x++;

        if (row > 1)
        {
            int minus = 0;
            for (col1 = 1; col1 < row; col1++)
            {
                printf("%d ", y-(minus++));
            }
            y += 2;
        }
        printf ("\n");
    }

    return 0;
}
