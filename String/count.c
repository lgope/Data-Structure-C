#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    int i, len, count = 0;
    gets(ch);
    len = strlen(ch);
    for(i = 0; i < len; i++)
    {
        if(ch[i] == 'A' || ch[i] == 'a')
        {
            count++;
        }
    }
    printf("\n%d\n", count);
    return 0;
}
