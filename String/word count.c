#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int len = 0, c = 1;
    printf("Enter a sentence.\n");
    gets(s);

    while(s[len] != '\0')
    {
        if(s[len] == ' ')
            c++;
            len++;
    }
    printf("Total words: %d\n", c);
    getch();
    return 0;
}
