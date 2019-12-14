#include<stdio.h>

void merge(int a[], int low, int mid, int high)
{
    int i, j, k, n1 = mid-low+1, n2 = high-mid;
    int b[n1], c[n2];

    for(i = 0; i < n1; i++)
    {
        b[i] = a[low+i];
    }

    for(j = 0; j < n2; j++)
    {
        c[j] = a[mid+1+j];
    }

    i = 0, j = 0, k = low;

    while(i < n1 && j < n2)
    {
        if(b[i] < c[j])
            a[k++] = b[i++];
        else
            a[k++] = c[j++];
    }

    while(i < n1)
        a[k++] = b[i++];

    while(j < n2)
        a[k++] = c[j++];
}

void mergeSort(int a[], int low, int high)
{
    if(low < high)
    {
        int mid = (high + low) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);

        merge(a, low, mid, high);
    }
}

void printArray(int a[], int size)
{
    for(int i = 0; i < size; i++)
        printf("%d ", a[i]);

    printf("\n");
}

int main()
{
    int a[] = {8, 6, 2, 4, 9};
    int size = sizeof(a)/sizeof(a[0]);

    printf("Before Sorting :");
    printArray(a, size);

    mergeSort(a, 0, size-1);

    printf("After Sorting :");
    printArray(a, size);

    return 0;
}
