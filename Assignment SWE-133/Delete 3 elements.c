#include<stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        printf("%d = %d\n", i, a[i]);
    }

    int index1, index2, index3;
    scanf("%d%d%d", &index1, &index2, &index3);

    for(i = index1; i < n; i++)
    {
        a[i] = a[i + 1];
    }

    for(i = index2-1; i < n; i++)
    {
        a[i] = a[i + 1];
    }

    for(i = index3-2; i < n; i++)
    {
        a[i] = a[i + 1];
    }

    printf("\nAfter deleting index.\n");

    for(i = 0; i < n-3; i++)
    {
        printf("%d = %d\n", i, a[i]);
    }

    return 0;
}


