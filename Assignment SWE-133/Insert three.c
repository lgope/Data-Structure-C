#include<stdio.h>
int main()
{
    int i,a[50],n,np,nv,c;
    printf("Enter the elements of array\n");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(c=1;c<4;c++)
    {
    printf("Enter the location where you want to add elelmet:\n");
    scanf("%d",&np);
    printf("Enter the new value to insert:\n");
    scanf("%d",&nv);
    for(i=n;i>=np;i--)
    {
        a[i]=a[i-1];
    }
    a[np]=nv;
    n++;
    }
    printf("Resultant array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}
