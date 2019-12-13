#include <stdio.h>

int main()
{
    int x, i, j, n,y,z;

    printf("Enter the array size : ");
    scanf("%d", &n);
    int a[n],b[n];

    printf("Enter the elements of array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The  array is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d = %d\n", i, a[i]);
    }

    printf("Enter the index numbers to delete element : \n");
    scanf("%d%d",&x,&y);

    j=0;
    for(i=0; i<n; i++)
    {
        if(i==x || i==y)
            continue;
        b[j]=a[i];
        j++;
    }

    printf("The resultent array is :\n");
    for (i = 0; i < j; i++)
    {
        printf("%d = %d\n", i, b[i]);
    }

    return 0;
}
