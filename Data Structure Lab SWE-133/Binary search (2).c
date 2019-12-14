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

    int j, l, flag = 0;;
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
        printf("Founded at index : %d\n", l);
    }


}
