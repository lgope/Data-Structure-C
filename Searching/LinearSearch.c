#include<stdio.h>

int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);

    int a[n], i, num, flag = 0, index;

    printf("Enter %d array element :\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number to find : ");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        if(num == a[i])
        {
            flag = 1;
            index = i;
            break;
        }
    }

    if (flag == 0)
        printf ("Number not found.\n");
    else printf ("Number found at index %d\n", index);


    return 0;
}

