#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 5
struct stack
{
    int top;
    char name[MAX][20],account_number[MAX][15], pin[MAX][10];
};
typedef struct stack STACK;
STACK s;
void push();
void pop();
void display();
void main()
{
    int choise;
    s.top=-1;
    while(1)
    {
        printf("\n*** Stack Menu ***");
        printf("\n\n1.Insert account holder Information\n2.Delete account holder Information\n3.Display\n4.Exit");
        printf("\n\nEnter your choice(1-4):");
        scanf("%d",&choise);

        switch(choise)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nWrong Choice!!");
        }
    }
}
void push()
{
    char name[20],account_number[15], pin[10];
    if(s.top==MAX-1)
    {
        printf("\nStack is full!!");
    }
    else
    {
        printf("\nEnter Name of Account Holder:");
        fflush(stdin);
        gets(name);
        s.top=s.top+1;
        strcpy(s.name[s.top],name);
        printf("\nEnter Account Number:");
        fflush(stdin);
        gets(account_number);
        strcpy(s.account_number[s.top],account_number);
        printf("\nEnter Pin Number:");
        fflush(stdin);
        gets(pin);
        strcpy(s.pin[s.top], pin);
    }
}

void pop()
{
    if(s.top==-1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\nDeleted Account Holder Name is: %s",s.name[s.top]);
        printf("\nDeleted Account number is:%s",s.account_number[s.top]);
        printf("\nDeleted Pin number is: %s",s.pin[s.top]);
        s.top=s.top-1;
    }
}

void display()
{
    int i;

    if(s.top==-1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\nStack is...\n");
        for(i=s.top;i>=0;--i){
            printf("%s\n",s.name[i]);
            printf("%s\n",s.account_number[i]);
            printf("%s\n",s.pin[i]);
        }
    }
}
