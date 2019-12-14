#include<stdio.h>

int main()
{
    int n, i, j;
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

    int n_index, nvalue;

    for(j = 1; j < 4; j++)
    {
        printf("Enter new %dth index : ", j);
        scanf("%d", &n_index);

        printf("Enter value : ");
        scanf("%d", &nvalue);
        for(i = n; i >= n_index; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[n_index] = nvalue;
        n++;
    }

    printf("After delete one element \n");
    for(i = 0 ; i < n; i++)
    {
        printf("index[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
