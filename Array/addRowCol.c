#include<stdio.h>

int main()
{
    int arr[5][5] = {{3, 8, 9, 10, 71},{3, 7, 6, 16, 18},{11, 65, 15, 17, 14},{13, 19, 22, 85, 20},{21, 66, 27, 99, 25}};

    printf("2D array\n");
    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
           printf("%d ", arr[row][col]);
        }
        printf("\n");
    }

    int sum = 0;
    printf("\nBlue colored numbers\n");
    for (int row = 1; row < 5; row++) {
        for (int col = 0; col < row; col++) {
            sum += arr[row][col];
            printf("%d ", arr[row][col]);
        }

        printf("\n");
    }

    printf("\nBlue colored numbers sum = %d\n", sum);

    return 0;
}
