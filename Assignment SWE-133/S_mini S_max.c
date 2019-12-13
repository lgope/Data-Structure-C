#include<stdio.h>
int main()
{
    int a[10], i;


    printf("Enter ten value.\n");
    for(i = 0; i < 10; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\n");


    printf("The sequence of array.\n");
    for(i = 0; i < 10; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    int max = a[0], S_max, mini, S_mini;
    for(i = 1; i < 10; i++)
    {
        if(max < a[i])
        {
            max =a[i];
        }
    }


    mini = S_mini = a[0];
    for(i = 1; i < 10; i++)
    {
        if(mini > a[i])
        {
            S_mini = mini;
            mini = a[i];
        }

        else if(S_mini > a[i] && a[i] != mini)
        {
            S_mini = a[i];
        }
    }

    printf("\nThe second maximum number is : %d\n", S_max);
    printf("The second minimum number is : %d\n", S_mini);


    getch();
    return 0;
}
