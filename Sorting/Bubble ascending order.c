#include<stdio.h>

int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);

    int a[n], i, j, swap;

    printf("Enter array elements : \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The array is : \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }

    printf("\nAscending order : \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    getch();
    return 0;
}
