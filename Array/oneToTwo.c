#include<stdio.h>

int main()
{
    int a[] = {9, 4, 8, 2, 5, 1};
    int size = sizeof(a)/sizeof(a[0]), b[3], c[3], i, j = 0, k = 0;

    for(i = 0; i < size; i++)
    {
        if(a[i]%2 == 0)
            b[j++] = a[i];
        else
            c[k++] = a[i];
    }

    printf("B array is :\n");
    for(i = 0; i < j; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\n\nC array is :\n");

    for(i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

     return 0;
}
