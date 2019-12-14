#include<stdio.h>

int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);

    int a[n], i;

    printf("Enter array elements : \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The array is : \n");
    for(i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    int num, l, mini = 0, max = n-1, mid = 0;

    printf("Enter a number for search : ");
    scanf("%d", &num);

    while(mini <= max)
    {
        mid = (mini + max) / 2;

        if(a[mid] == num)
        {
            l = mid;
            break;
        }
        else if(num < a[mid])
        {
            max = mid - 1;
        }
        else
        {
            mini = mid + 1;
        }
    }

    if(mini > max)
    {
        printf("%d is not found\n", num);
    }
    else
    {
        printf("%d is found at index a[%d]\n", num, l);
    }
}
