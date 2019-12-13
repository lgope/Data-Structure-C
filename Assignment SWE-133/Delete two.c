#include <stdio.h>

int main()
{
    int a[100],b[100], x, i, j, n,y,z;

    printf("Enter the array size : ");
    scanf("%d", &n);

    printf("Enter the elements of array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the location where you wish to delete element : \n");
    scanf("%d %d",&x,&y);

    j=0;
    for(i=0; i<n; i++)
    {
        if(i==x || i==y)
            continue;
        b[j]=a[i];
        j++;
    }

    printf("so the array is :\n");
    for (i = 0; i < j; i++)
        printf("%d ", b[i]);

    return 0;
}
