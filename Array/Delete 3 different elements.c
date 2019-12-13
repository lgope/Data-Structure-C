#include<stdio.h>

int main()
{
    int n, i, j;

    printf("Enter array size : \n");
    scanf("%d", &n);
    
    int arr[n], b[n], x;

    printf("Enter %d array element's : \n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        printf("index[%d] = %d\n", i, arr[i]);
    }

    int n_index;


        printf("Enter two index to delete : ");
        scanf("%d%d", &n_index, &x);

        j = 0;
        for(i = 0; i < n; i++)
        {
            if(i == n_index || i == x)
                continue;
            b[j] = arr[i];
            j++;
        }

    printf("After delete one element \n");
    for(i = 0 ; i < j; i++)
    {
        printf("index[%d] = %d\n", i, b[i]);
    }

    return 0;
}

