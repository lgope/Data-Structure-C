#include<stdio.h>
#include<string.h>

int main(void)
{
    char word[1000];
    int temp, length, i = 1, j, n;
    printf("\nPlease enter the word: ");
    scanf("%s", &word);
    length = strlen(word);
    while(i < length)
    {
        for(j = length - 1; j >= i; j--)
        {
            if(word[j - 1] > word[j])
            {
                temp = word[j - 1];
                word[j - 1] = word[j];
                word[j] = temp;
            }
        }
        i++;
    }
    printf("\nAfter ascending the letters of the word: \n\n");
    for(n = 0; n < length; n++)
    {
        printf("%c", word[n]);
    }
    getch();
    return 0;
}

