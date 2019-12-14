#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], s[10][10];
    int row, col, r, c;


    printf("Enter the rows and cols.\n");
    scanf("%d %d", &r, &c);


    printf("Enter elements for A matrix:\n");
    for(row = 0; row < r; row++)
    {
        for(col = 0; col < c; col++)
        {
            printf("a[%d][%d] = ", row,col);
            scanf("%d", &a[row][col]);
        }
        printf("\n");
    }


    printf("Please enter elements for B matrix:\n");
    for(row = 0; row < r; row++)
    {
        for(col = 0; col < c; col++)
        {
            printf("b[%d][%d] = ", row,col);
            scanf("%d", &b[row][col]);
        }
        printf("\n\n");
    }


    printf("A = ");
    for(row = 0; row < r; row++)
    {
        printf("\t");
        for(col = 0; col < c; col++)
        {
            printf("%d ", a[row][col]);
        }
        printf("\n\n");
    }


    printf("B = ");
    for(row = 0; row < r; row++)
    {
        printf("\t");
        for(col = 0; col < c; col++)
        {
            printf("%d ", b[row][col]);
        }
        printf("\n\n");
    }


    for(row = 0; row < r; row++)
    {
        for(col = 0; col < c; col++)
        {
            s[row][col] = a[row][col] + b[row][col];
        }
        printf("\n");
    }


    printf("A+B = ");
    for(row = 0; row < r; row++)
    {
        printf("\t");
        for(col = 0; col < c; col++)
        {
            printf("%d ", s[row][col]);
        }
        printf("\n\n");
    }

    int j = 0, n = c;
    int srow = 0;

    while(j < n)
    {
        printf("Sum of row's = \n");
        row = j;
        printf("\t");
        for(col = 0; col < c; col++)
        {
            srow = srow + s[row][col];
        }
        printf("\n\n");
         printf("%d", srow);
        j++;
    }

    return 0;
}
