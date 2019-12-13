#include<stdio.h>
#include<limits.h>

int main()
{
    int a[50];
    int n,i,small,s_small, big, s_big;

    printf("Please enter number of array size: ");
    scanf("%d",&n);

    printf("Enter %d elements: \n",n);
    for(i=0;i<n;i++)
    {
        printf("a[%d] = ", i);
        scanf("%d",&a[i]);
    }

    big = 0;
    for(i = 0; i < n; i++)
    {
        if(big < a[i])
        {
            big = a[i];
        }
    }

    s_big = 0;
    for(i = 0; i < n; i++)
    {
        if(s_big > a[i] && a[i] >= s_big)
        s_big = a[i];
    }

    small=s_small=a[0];

    for(i=1;i<n;i++)
    {
        if(small>a[i])
        {
            s_small=small;
            small=a[i];
        }
        else if(s_small>a[i] && a[i]!=small)
        {
            s_small=a[i];
        }
    }

    printf("The Second Smallest Element in the given Array: %d", s_small);
    printf("\nThe Second Biggest Element in the given Array: %d", s_big);
    getch();
    return 0;
}
