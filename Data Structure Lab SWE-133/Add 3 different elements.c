#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter array size : ");
    scanf("%d", &n);
    int a[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        printf("%d = %d\n", i, a[i]);
    }

    int index, value, j, mines = 0;

    printf("Enter how many elements you want to insert.\n");
    scanf("%d", &j);
    int k = j, l = j;

    printf("Enter index number :\n");
    while(l--)
    {
        scanf("%d", &index);

        for(i = n+l-1; i > index+l-1; i--)
        {
            a[i] = a[i - 1];
        }

        for(i = index; i <= index+l-1; i++)
        {
            scanf("%d", &value);
        }

    }

    printf("\nAfter deleting index.\n");

    for(i = 0; i < n+k; i++)
    {
        printf("%d = %d\n", i, a[i]);
    }

    return 0;
}

/*for(i = n+2; i >= n_index+2; i--)
    {
        arr[i] = arr[i - 3];
    }

    printf("Enter new 3 elements\n");
    for(i = n_index; i <= n_index+2; i++)
    {
        scanf("%d", &arr[i]);
    }*/
