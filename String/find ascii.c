#include<stdio.h>
#include<string.h>

int main()
{
    char ch[20];

    gets(ch);

    int i, len = strlen(ch);

    for(i = 0; i < len; i++)
    {
        printf("%d", ch[i]);
    }

    getch();
    return 0;
}

