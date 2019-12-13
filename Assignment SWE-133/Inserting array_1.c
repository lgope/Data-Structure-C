#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter array size : \n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter array element's : \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        printf("index[%d] = %d\n", i, arr[i]);
    }

    int n_index, n1, n2, n3;
    printf("Enter new index : ");
    scanf("%d", &n_index);
    printf("Enter new 3 elements : \n");


    i = n_index;
    while(i < n+3)
    {
        scanf("%d", &n1);
        arr[i] = arr[i+3];
        arr[n_index] = n1;
        i++;
        n1 = 0;
    }

    for(i = 0; i < n+3; i++)
    {
        printf("index[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

