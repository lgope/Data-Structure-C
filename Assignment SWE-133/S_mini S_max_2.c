#include<stdio.h>
int main( )
{
    int   a[20], b[20], n, i, j, temp;
    printf("Please enter the size of array: ");
    scanf("%d", &n) ;
    printf("\nPlease enter the elements of array : \n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i );
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nSecond minimum Element is : %d\n", a[1]);
    printf("Second maximum Element is : %d\n", a[n-2]);
    getch();
    return 0;
}

