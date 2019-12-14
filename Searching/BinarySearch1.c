#include<stdio.h>

int binarySearch(int a[], int low, int high, int num)
{
    if(high >= low)
    {
        int mid = (high + low) / 2;

        if(a[mid] == num)
            return mid;

        if(a[mid] > num)
            return binarySearch(a, low, mid-1, num);

        else return binarySearch(a, mid+1, high, num);
    }

    return -1;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a)/sizeof(a[0]);
    int num = 5;

    int result = binarySearch(a, 0, size-1, num);

    (result == -1)? printf("Number not found")
                  : printf("Number found at index %d\n",
                                                result);
}
