#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

char *funcx( char *str )
{
    strcpy( str, "String from funcx()");

    return str;
}

int main(void)
{
    char str[32];
    char *ptr;

    ptr = funcx(str);

    printf("The return string is : %s\n", ptr);
   // printf("A backslash \\ in the string\n");

    getch();
    return 0;
}
