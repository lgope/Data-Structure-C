//Selection Sort

#include<stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int a[], int len)
{
    int i, j, mid_index;

    for(i = 0; i < len-1; i++)
    {
        mid_index = i;

        for(j = i+1; j < len; j++)
        {
            if(a[j] < a[mid_index])
                mid_index = j;
        }

        swap(&a[mid_index], &a[i]);
    }

}

void printArray(int a[], int len)
{
    for(int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
}

int main()
{
    int a[] = {6, 5, 9, 8, 2};

    int len = sizeof(a) / sizeof(a[0]);

    printf("Before Sorting :\n");
    printArray(a, len);

    selectionSort(a, len);

    printf("\n\nAfter Sorting :\n");
    printArray(a, len);

    return 0;
}
