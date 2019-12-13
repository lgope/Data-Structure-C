#include<stdio.h>

void mergeTwoArray(int a[], int b[], int size, int len, int c[])
{
    int i = 0, j = 0, k = 0;

    while(i < size && j < len)
    {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i < size)
        c[k++] = a[i++];

    while(j < len)
        c[k++] = b[j++];
}

void printArray(int a[], int len)
{
    int i;

    for(i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
}

int main()
{
    int a[] = {2, 4, 6, 8, 10};
    int b[] = {1, 3, 5, 7, 9};

    int size = sizeof(a)/sizeof(a[0]);
    int len = sizeof(b)/sizeof(b[0]);

    int c[size+len];

    mergeTwoArray(a, b, size, len, c);

    printf("After merge two array:\n");
    printArray(c, size+len);

    return 0;
}
