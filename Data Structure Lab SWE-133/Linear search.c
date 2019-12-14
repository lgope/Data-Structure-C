#include<stdio.h>

int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);

    int a[n], i;

    printf("Enter elements :\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The array is : \n");
    for(i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i,  a[i]);
    }

    int j, l, flag = 0;;
    printf("\nEnter seacrh data : ");
    scanf("%d", &j);

    for(i = 0; i < n; i++)
    {
        if(a[i] == j)
        {
            l = i;
            flag++;
            break;
        }
    }

    if(flag == 0)
    {
        printf("Not found\n");
    }
    else
    {
        printf("Founded at index : a[%d]\n\n", l);

        printf("After delete %d\n", j);
        printf("The final array is : \n");
        for(i = l; i < n; i++)
        {
            a[i] = a[i+1];
        }

        for(i = 0; i < n-1; i++)
        {
            printf("a[%d] = %d\n", i, a[i]);
        }
    }


    return 0;
}

