#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    int i,len;
    int lower[26],upper[26];
    printf("Enter any string:\n");
    gets(str);

    len = strlen(str);
    for(i=0; i<26; i++)
    {
        lower[i] = 0;
        upper[i]=0;
    }
    for(i=0; i<len; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            lower[str[i] - 97]++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            upper[str[i] - 65]++;
        }
    }

    for(i=0; i<26; i++)
    {
        if(upper[i]!=0)
        {
            printf("%c(%d)",(i+65),upper[i]);
        }
    }
    for(i=0; i<26; i++)
    {
        if(lower[i] != 0)
        {
            printf("%c(%d)", (i + 97), lower[i]);
        }
    }

    return 0;
}

