#include<stdio.h>
int displaystring(char str[])
{
    printf("String Output: ");
    puts(str);
}
int main()
{
    char str[400];
    printf("Enter Your Name: ");
    gets(str);
    displaystring(str);
    return 0;
}
