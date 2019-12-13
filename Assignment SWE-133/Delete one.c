#include<stdio.h>

int main()
{
    int a[100], n, i;

    printf("Enter the size of array : ");
    scanf("%d", &n);

    printf("Enter elements of array : \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int index;
    printf("Enter index number to delete : ");
    scanf("%d", &index);

    for(i = index; i < n; i++)
    {
        a[i] = a[i + 1];
    }

    printf("\nResultant deleting one index.\n");

    for(i = 0; i < n-1; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}


