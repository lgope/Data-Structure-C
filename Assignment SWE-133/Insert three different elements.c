#include<stdio.h>

int main()
{
    int i,n,nposition,nvalue,j;

    printf("Enter the size of array\n");
    scanf("%d", &n);
    int a[n];

    printf("Enter %d elements\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("%d = %d\n",i, a[i]);
    }

    for(j=1; j<4; j++)
    {
        printf("Enter the index number where you want to add elelmet:\n");
        scanf("%d",&nposition);

        printf("Enter the new value to insert:\n");
        scanf("%d",&nvalue);

        for(i=n; i>=nposition; i--)
        {
            a[i]=a[i-1];
        }

        a[nposition]=nvalue;
        n++;
    }

    printf("Resultant array is\n");
    for(i=0; i<n; i++)
    {
        printf("%d = %d\n",a[i]);
    }

    return 0;
}
