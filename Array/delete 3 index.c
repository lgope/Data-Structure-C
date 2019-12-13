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

    int index, index1;
    scanf("%d%d", &index, &index1);

    for(i = index; i < n; i++)
    {
        a[i] = a[i + 1];
    }

    for(i = index1-1; i < n; i++)
    {
        a[i] = a[i + 1];
    }

    printf("\nAfter deleting index.\n");

    for(i = 0; i < n-2; i++)
    {
        printf("%d = %d\n", i, a[i]);
    }

    return 0;
}

