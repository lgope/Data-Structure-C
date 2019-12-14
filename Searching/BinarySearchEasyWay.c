#include<stdio.h>

int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);

    int a[n], i, num, low = 0, high = n, mid = 0;

    printf("Enter %d array element :\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number to find : ");
    scanf("%d", &num);

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (num == a[mid])
            break;

        if (num < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (low > high)
        printf ("Number not found.\n");
    else
        printf ("Number found at index %d\n", mid);

        return 0;
}
