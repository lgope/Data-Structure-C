#include<stdio.h>
#include<string.h>
int main()
{
    char nam[100];
    char nam1[100];

    gets(nam);

    strcpy(nam1, nam);

    printf("%s", nam1);
    return 0;
}
