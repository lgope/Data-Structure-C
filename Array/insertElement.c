#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[15],n,i;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int j,newvalue[3],newindex[3];
    printf("\nEnter three new values:");
    for(i=0;i<3;i++)
    scanf("%d",&newvalue[i]);

    printf("\nEnter newindexs:");
    for(i=0;i<3;i++){
      scanf("%d",&newindex[i]);
    }
    for(j=0;j<3;j++)
    {
    for(i=n-1;i>=newindex[j];i--)
         a[i+1]=a[i];
        a[newindex[j]]=newvalue[j];
    }

printf("\nYour array elements:");
    for(i=0;i<n+3;i++){
        printf("\nThe elements are=%d\n",a[i]);
    }

    return 0;
}
