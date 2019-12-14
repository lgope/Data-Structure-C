#include<stdio.h>

int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);

    int a[n], i;

    printf("Enter elements :\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The array is : \n");
    for(i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i,  a[i]);
    }

    int j, l;
    printf("\nEnter seacrh data : ");
    scanf("%d", &j);

    int mini = 0, max = n-1, mid;

    while(mini <= max)
    {
        mid = (mini+max) / 2;

        if(a[mid] == j)
        {
            l=mid;
            break;
        }
        else if(j < a[mid])
        {
            max = mid-1;

        }
        else
        {
            mini = mid+1;
        }
    }

    if(mini>max)
    {
        printf("Not found\n");
    }
    else
    {
        printf("Founded at index : a[%d]\n\n", l);

        printf("After delete %d\n", j);
        printf("The final array is : \n");
        for(i = l; i < n; i++)
        {
            a[i] = a[i+1];
        }

        for(i = 0; i < n-1; i++)
        {
            printf("a[%d] = %d\n", i, a[i]);
        }
    }

    return 0;

}
