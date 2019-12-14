#include<stdlib.h>
#include<stdio.h>

// Merges two subarrays of arr[].
// First subarray is arr[low..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int low, int mid, int high)
{
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 =  high - mid;

    /* create temp arrays */
    int b[n1], c[n2];

    /* Copy data to temp arrays low[] and R[] */
    for (i = 0; i < n1; i++)
        b[i] = arr[low + i];
    for (j = 0; j < n2; j++)
        c[j] = arr[mid + 1+ j];


    i = 0;
    j = 0;
    k = low;
    while (i < n1 && j < n2)
    {
        if (b[i] <= c[j])
        {
            arr[k++] = b[i++];
        }
        else
        {
            arr[k++] = c[j++];
        }
    }


    while (i < n1)
    {
        arr[k++] = b[i++];
    }

    while (j < n2)
    {
        arr[k++] = c[j++];
    }
}


void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // Same as (low+r)/2, but avoids overflowow for
        // lowarge low and h
        int mid = low+(high-low)/2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);

        merge(arr, low, mid, high);
    }
}


void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}
