#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node* next;
} node;

node* head= NULL ;

void insert(int y,int x)
{
    int count=1;
    node* newnode=(node*)malloc(sizeof(node*));
    newnode->data=y;
    newnode->next= NULL;

    if(x==1)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        node* current=head;
        while(count<x-1)
        {
            current=current->next;
            count++;
        }
        newnode->next=current->next;
        current->next=newnode;
    }
}

void print()
{
    int count=0;
    node* current=head;
    printf("The linked list is:\n");
    while(current!=NULL)
    {
        count++;
        printf("[%d]  [%d]", current, current->data);
        current=current->next;
    }
    printf("[NULL]\n");
    printf("Total node : %d\n",count);

}

int main()
{
    int i,n,x,y;
    insert(10,1);
    insert(20,2);
    insert(30,3);
    insert(40,4);
    insert(50,5);
    print();
    printf("How many new values you want to insert:\n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("Enter position %d : ",i);
        scanf("%d",&x);
        printf("\nValue:");
        scanf("%d",&y);
        printf("\n");
        insert(y,x);
    }

    print();
    return 0;
}
