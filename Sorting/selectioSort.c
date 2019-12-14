#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int size)
{
    int i, j, mid_index;

    for(i = 0; i < size-1; i++){
        mid_index = i;

        for(j = i+1; j < size; j++){
            if(arr[j] < arr[mid_index])
            mid_index = j;

            swap(&arr[mid_index], &arr[i]);
        }
    }
}

void printfArray(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {8, 9, 7, 2, 6, 5};

    int size = sizeof(arr)/ sizeof(arr[0]);

    selectionSort(arr, size);
    printfArray(arr, size);

    return 0;
}
