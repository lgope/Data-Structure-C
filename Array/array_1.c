#include<stdio.h>
int main()
{
    system("color 2f");
    int a[10],  i, sum = 0;

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }

    for(i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }

    printf("\n\nSum = %d", sum);
    float ave;
    ave = sum / 10.00;
    printf("\nAverage = %.2f", ave);

   int small = a[0];
   int big = a[0];

   for(i = 1; i < 10; i++)
   {
       if(small > a[i])
       {
           small = a[i];
       }
       
       if(big < a[i])
       {
           big = a[i];
       }

   }
    printf("\n\nSmall = %d\nBig = %d\n", small, big);
   return 0;
}
