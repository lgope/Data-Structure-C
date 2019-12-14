#include<stdio.h>
#include<string.h>

int main()
{
    char f1[20], f2[20], f3[20];
    gets(f1);
    gets(f2);
    gets(f3);

    strrev(f2);

    strcat(f2, f3);
    strcat(f1, f2);

    printf("%s", f1);

    return 0;
}
