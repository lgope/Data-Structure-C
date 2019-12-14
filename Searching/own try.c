#include<stdio.h>
int main()
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, n, l, c = 0;
    scanf("%d", &n);

    for(i = 0; i < 10; i++)
    {
        if(a[i] == n)
        {
            c = 1;
            l = i;
            break;
        }
    }
    if(c == 1)
    {
        printf("The value is founded.\n");
        printf("It's location = %d\n", l+1);
    }
    else
    {
        printf("The value is not founded.\n");
    }

    getch();
}

