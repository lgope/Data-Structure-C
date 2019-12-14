// C program to implement recursive Binary Search

#include <stdio.h>

int binarySearch(int arr[], int low, int high, int num)
{
   if (high >= low)
   {
        int mid = low + (high - low)/2;

        if (arr[mid] == num)
            return mid;

        if (arr[mid] > num)
            return binarySearch(arr, low, mid-1, num);


        return binarySearch(arr, mid+1, high, num);
   }


   return -1;
}

int main(void)
{
   int arr[] = {2, 3, 4, 10, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int num = 10;
   int result = binarySearch(arr, 0, n-1, num);

   (result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d",
                                                   result);
   return 0;
}
