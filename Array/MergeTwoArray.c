//Merge Two Array
#include<stdio.h>

void mergeArray(int a[], int b[], int len1, int len2, int c[])
{
    int i = 0, j = 0, k = 0;

    while(i < len1 && j < len2)
    {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else c[k++] = b[j++];
    }

    while(i < len1)
        c[k++] = a[i++];

    while(j < len2)
        c[k++] = b[j++];

}

void printArray(int c[], int len)
{
    for(int i = 0; i < len; i++)
        printf("%d ", c[i]);

    printf("\n");
}

int main()
{
    int a[] = {1, 3, 5, 7, 9};
    int b[] = {2, 4, 6, 8, 10};

    int len1 = sizeof(a) / sizeof(a[0]), len2 = sizeof(b) / sizeof(b[0]);
    int c[len1+len2];

    printf("Before Merging: \nA = ");
    printArray(a, len1);

    printf("B = ");
    printArray(b, len2);

    mergeArray(a, b, len1, len2, c);

    printf("\nAfter Merging :\nC = ");
    printArray(c, len1+len2);

    return 0;
}
