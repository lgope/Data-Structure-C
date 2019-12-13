#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100];
    int i;

    gets(ch);

    for(i = strlen(ch)-1; i >= 0; i--)
    {
        printf("%c", ch[i]);
    }

    return 0;
}
