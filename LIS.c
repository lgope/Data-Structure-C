#include<stdio.h>

int main()
{

    int i,j=0,d=0,c;
    int a[100],b[100],n;

    printf("Enter Your array size\n");
    scanf("%d", &n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    for(i=0; i<n; i++)
    {
        b[i]=1;
    }

    for(i=1; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            if(a[j]<a[i] && b[i]<b[j]+1)
            {
                b[i]=b[j]+1;

            }
        }
    }

    for(i=0; i<n; i++)
    {
        printf("%d\t",b[i]);
    }

    return 0;
}
