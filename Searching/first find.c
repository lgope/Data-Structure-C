#include<stdio.h>
int main()
{
    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, value, position = -1;
    printf("Please inter a value.\n");
    scanf("%d", &value);
    for(i = 0; i < 10; i++)
    {
        if(value == a[i])
        {
            position = i + 1;
            break;
        }
    }
    if(position == -1)
    {
        printf("Not found.\n");
    }
    else
    {
        printf("The value is founded at position: %d\n", position);
    }
    return 0;
}
