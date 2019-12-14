#include<stdio.h>
int main()
{
    char name[10], c[10];
    int i, len;

    printf("Input your name: ");
    scanf("%s", name);

    len = strlen(name);
    //printf("Your name is %s.\n", name);

    for(i = len; i >= 0; i--)
    {
        printf("%c", name[i]);
    }
    return 0;
}

