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

    int n_index;
    printf("Enter new index : ");
    scanf("%d", &n_index);

    for(i = n_index; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("After delete one element \n");
    for(i = 0 ; i < n - 1; i++)
    {
        printf("index[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
