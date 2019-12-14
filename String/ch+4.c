#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    int i;
    scanf("%s", ch);
    //gets(ch);
    int len = strlen(ch);
    for(i = 0; i < len; i++)
    {
        char x = ch[i] + 4;
        printf("%c", x);
    }
    getch();
    return 0;
}

