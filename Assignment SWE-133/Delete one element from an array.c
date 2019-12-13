#include<stdio.h>

int main()
{
    int n, i;

    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a[n];

    printf("Enter %d elements of array : \n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The array is : \n");
    for(i = 0; i < n; i++)
    {
        printf("%d = %d\n", i, a[i]);
    }

    int index;
    printf("Enter index number where you want to delete : ");
    scanf("%d", &index);

    for(i = index; i < n; i++)
    {
        a[i] = a[i + 1];
    }

    printf("\nAfter deleting one index.\n");

    for(i = 0; i < n-1; i++)
    {
        printf("%d = %d\n", i, a[i]);
    }

    return 0;
}

