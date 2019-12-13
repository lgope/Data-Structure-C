#include<stdio.h>
int main()
{
    system("color 3f");
    printf("Program using Array. \n");
    int a[10], i;
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The sequence of array.\n");
    for(i = 0; i < 10; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    int sum = 0;
    for(i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }
    printf("\nSum = %d", sum);


    float ave;
    ave = sum / 10.00;
    printf("\nAverage = %.2f", ave);


    int big = a[0], small = a[0], p = 0, l = 0;
    for(i = 1; i < 10; i++)
    {
        if(big < a[i])
        {
            big = a[i];
            p = i;
        }
        if(small > a[i])
        {
            small = a[i];
            l = i;
        }
    }
    printf("\n\nBig = %d\nSmall = %d\n\a", big, small);
    printf("\nLocation of the bigest value is: a[%d]", p);
    printf("\nLocation of the smallest value is: a[%d]", l);
    getch();
    return 0;
}
