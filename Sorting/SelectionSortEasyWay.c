#include <stdio.h>

int main()
{
    int n;
    printf ("Enter array size : ");
    scanf ("%d", &n);

    int a[n], i, j, midIndex = 0, temp;

    printf ("Enter %d array element :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf ("%d", &a[i]);
    }

    for (i = 0; i < n-1; i++)
    {
        midIndex = i;

        for (j = i+1; j < n; j++)

            if (a[j] < a[midIndex])
                midIndex = j;

        if (midIndex != i)
        {
            temp = a[midIndex];
            a[midIndex] = a[i];
            a[i] = temp;
        }
    }


    printf ("\n\nAfter Selection Sort :\n");
    for (i = 0; i < n; i++)
    {
        printf ("%d ", a[i]);
    }


    getch();
    return 0;
}
