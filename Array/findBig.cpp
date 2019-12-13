#include<stdio.h>
int main()
{
    printf("Dr. Asraf\nDept. of SWE\nDaffodil International University\n");
    int a,b,sum,big,c=89,fbig;
    printf("Input an integer value: ");
    scanf("%d",&a);
    printf("Input an integer value: ");
    scanf("%d",&b);
    sum=a+b;
    printf("Result is: %d",b);
    if(a>b)
    {
        big=a;
    }
    else
    {
        big=b;
    }
    if(big>c)
    {
        fbig=big;
    }
    else
    {
        fbig=c;
    }
    printf("\nBig value is: %d",fbig);

    return 0;
}
